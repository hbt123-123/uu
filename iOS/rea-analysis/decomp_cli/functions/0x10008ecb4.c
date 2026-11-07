// rea decompile_all
// name: FUN_10008ecb4
// address: 0x10008ecb4
// body: available
// range: 0x10008ecb4-0x10008ee1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008ecb4(undefined8 *param_1,ulong param_2,undefined8 param_3,uint param_4,
                  undefined8 *param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 unaff_x25;
  undefined1 unaff_w26;
  undefined1 uVar8;
  undefined8 local_d8;
  
  bVar7 = (byte)(param_4 >> 8) & 1;
  if (((param_4 >> 8 & 1) == 0) && ((param_4 & 1) == 0)) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10008ee18);
      (*pcVar3)();
    }
    if (*(ulong *)(param_6 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10008ee1c);
      (*pcVar3)();
    }
    param_6 = param_6 + param_2 * 0x10;
    unaff_x25 = *(undefined8 *)(param_6 + 0x20);
    uVar1 = *(undefined8 *)(param_6 + 0x28);
    _swift_bridgeObjectRetain(uVar1);
    local_d8 = 0xf;
    uVar6 = uVar1;
    FUN_1000714b8();
    unaff_w26 = (undefined1)uVar6;
    _swift_bridgeObjectRelease(uVar1);
    FUN_100098180();
    bVar7 = 0;
    uVar8 = 8;
  }
  else {
    uVar8 = 7;
  }
  puVar4 = &DAT_100104690;
  FUN_10000eb08(&DAT_100104690,&DAT_1000d56e0);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(ulong *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  puVar4[0x30] = (char)param_4;
  puVar4[0x31] = bVar7;
  puVar5 = puVar4;
  FUN_100097700();
  _swift_setDeallocating(puVar4);
  uVar1 = *param_5;
  uVar6 = param_5[1];
  uVar2 = *(undefined1 *)(param_5 + 2);
  FUN_100065610(uVar1,uVar6,uVar2);
  *param_1 = puVar5;
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 3) = uVar2;
  param_1[4] = local_d8;
  param_1[5] = unaff_x25;
  *(undefined1 *)(param_1 + 6) = unaff_w26;
  *(undefined1 *)(param_1 + 10) = uVar8;
  return;
}

