// rea decompile_all
// name: FUN_10010cff8
// address: 0x10010cff8
// body: available
// range: 0x10010cff8-0x10010d17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010cff8(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_e0 [16];
  undefined8 *local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0 [3];
  undefined *local_98;
  
  FUN_100401b14(0);
  local_d0 = param_2;
  uStack_c8 = param_3;
  local_c0 = param_4;
  FUN_1003fb48c(FUN_100112d18,auStack_e0,0xd0000000000000ac,0x800000010088b950,0xd00000000000002e,
                0x800000010088bfc0,0xbb,0);
  FUN_10010ddc4(param_1,param_2,param_3,param_4);
  FUN_1004359b0(param_2,param_3,param_4);
  if ((param_3 & 1) == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(undefined8 *)(&DAT_10080da58 + (long)param_2 * 8);
  }
  FUN_1003a3b8c();
  uVar1 = *param_2;
  puVar3 = (undefined8 *)param_2[1];
  puVar5 = &DAT_100a75980;
  FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar6 = puVar3;
  _swift_bridgeObjectRetain();
  FUN_1003a1304();
  uVar2 = *puVar6;
  uVar4 = puVar6[1];
  local_98 = PTR___sSiN_100995968;
  local_b0[0] = uVar7;
  FUN_10003e8bc(local_b0,puVar5 + 0x30);
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  FUN_10003f094(local_b0);
  FUN_1000f62a0(uVar1,puVar3,puVar5);
  _swift_bridgeObjectRelease(puVar3);
  _swift_setDeallocating(puVar5);
  FUN_1000f7988(puVar5 + 0x20);
  return;
}

