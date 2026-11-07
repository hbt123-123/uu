// rea decompile_all
// name: FUN_1001fb250
// address: 0x1001fb250
// body: available
// range: 0x1001fb250-0x1001fb477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001fb250(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_120 [16];
  undefined4 local_110;
  undefined8 local_108;
  undefined *puStack_100;
  undefined *local_f8;
  long lStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar1 = PTR___sSiN_100995968;
  local_c0 = param_5;
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar5 = (undefined *)0xe300000000000000;
    puVar6 = (undefined *)0x6c696e;
  }
  else {
    puVar6 = PTR___sSiN_100995968;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    __sSS6appendyySSF(0x2a,0xe100000000000000);
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar4);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar4);
  }
  local_d0 = puVar5;
  FUN_100401b14(0);
  local_c8 = (undefined1 *)&local_d0;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar3 = local_c0;
  local_e0 = local_c0;
  local_110 = (int)param_1;
  local_108 = param_2;
  puStack_100 = puVar6;
  local_f8 = puVar5;
  lStack_f0 = param_3;
  local_e8 = (int)param_4;
  uStack_d8 = param_6;
  FUN_1003fb48c(FUN_1002016d8,auStack_120,0xd0000000000000a0,0x800000010088d990,0xd000000000000037,
                0x800000010087c9c0,0x157,0);
  puVar2 = local_c8;
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(int *)(puVar2 + -0x40) = (int)param_1;
  *(undefined8 *)(puVar2 + -0x38) = param_2;
  *(undefined **)(puVar2 + -0x30) = puVar6;
  puVar1 = local_d0;
  *(undefined **)(puVar2 + -0x28) = local_d0;
  *(long *)(puVar2 + -0x20) = param_3;
  *(int *)(puVar2 + -0x18) = (int)param_4;
  *(undefined8 *)(puVar2 + -0x10) = uVar3;
  *(undefined8 *)(puVar2 + -8) = param_6;
  FUN_1003fb48c(FUN_1002016e4,puVar2 + -0x50,0xd0000000000000a0,0x800000010088d990,
                0xd000000000000037,0x800000010087c9c0,0x158,0);
  _swift_bridgeObjectRelease(puVar1);
  FUN_100041ee4(param_1,param_2,param_3,param_4,uVar3,param_6);
  return;
}

