// rea decompile_all
// name: FUN_1004650e0
// address: 0x1004650e0
// body: available
// range: 0x1004650e0-0x100465163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004650e0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  byte bVar5;
  
  puVar4 = (undefined *)unaff_x20[2];
  if (puVar4 == (undefined *)0x0) {
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 0xc000000000000000;
    bVar5 = 1;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar3 = unaff_x20[3];
    uVar2 = unaff_x20[4];
    bVar5 = (byte)*(undefined4 *)(unaff_x20 + 1);
    uVar1 = *unaff_x20;
    _swift_bridgeObjectRetain(puVar4);
    FUN_100008184(uVar3,uVar2);
  }
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = bVar5 & 1;
  param_1[2] = puVar4;
  param_1[3] = uVar3;
  param_1[4] = uVar2;
  return;
}

