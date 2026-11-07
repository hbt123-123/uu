// rea decompile_all
// name: FUN_1005e63c4
// address: 0x1005e63c4
// body: available
// range: 0x1005e63c4-0x1005e64db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005e63c4(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  byte *unaff_x20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  bVar3 = *unaff_x20;
  if (3 < bVar3) {
    pcVar4 = "updateFileReceiveError";
    puVar6 = (undefined1 *)0xd000000000000014;
    if (bVar3 != 6) {
      pcVar4 = "willCloseFileReceive";
      puVar6 = (undefined1 *)0xd000000000000015;
    }
    pcVar5 = "closeFileReceiveForDevice";
    puVar9 = &DAT_d000000000000018;
    if (bVar3 != 4) {
      pcVar5 = "updateFileReceiveProcess";
      puVar9 = (undefined1 *)0xd000000000000016;
    }
    if (bVar3 < 6) {
      pcVar4 = pcVar5;
      puVar6 = puVar9;
    }
    auVar11._8_8_ = (ulong)pcVar4 | 0x8000000000000000;
    auVar11._0_8_ = puVar6;
    return auVar11;
  }
  pcVar4 = "removeAllFileReceive";
  uVar8 = 0xd000000000000017;
  if (bVar3 != 2) {
    pcVar4 = "closeFileReceiveForTask";
    uVar8 = 0xd000000000000019;
  }
  uVar1 = 0x80000001008be820;
  uVar7 = 0xd000000000000014;
  if (bVar3 != 0) {
    uVar1 = 0xef65766965636552;
    uVar7 = 0x656c69466e65706f;
  }
  uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar8 = uVar7;
  }
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = uVar8;
  return auVar10;
}

