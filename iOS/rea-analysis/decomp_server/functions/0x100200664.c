// rea decompile_all
// name: FUN_100200664
// address: 0x100200664
// body: available
// range: 0x100200664-0x1002009cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100200664(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  local_98 = param_8;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  local_88 = param_9;
  lVar2 = *(long *)(DAT_100b360a8 + 0x80);
  local_a0 = param_3;
  local_90 = param_2;
  local_7c = param_4;
  if ((param_4 & 1) == 0) {
    local_78 = param_2;
    _swift_retain();
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    puVar4 = PTR___sSiN_100995968;
    puVar3 = PTR___sSiN_100995968;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    local_70 = puVar3;
    puStack_68 = puVar6;
    __sSS6appendyySSF(0x78,0xe100000000000000);
    local_78 = param_3;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar5);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    puVar4 = puStack_68;
    puVar5 = local_70;
  }
  else {
    _swift_retain();
    puVar4 = (undefined *)0xe300000000000000;
    puVar5 = (undefined *)0x6c696e;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_ac = param_7 & 1;
  local_b8 = (undefined1)local_ac;
  local_e0 = param_1;
  puStack_d8 = puVar5;
  local_d0 = puVar4;
  uStack_c8 = param_5;
  local_c0 = param_6;
  local_a8 = param_5;
  FUN_1003fb48c(FUN_10003e918,auStack_f0,0xd0000000000000a9,0x8000000100877660,0xd000000000000052,
                0x8000000100877940,0x1d2,0);
  _swift_bridgeObjectRelease(puVar4);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  puVar4 = &DAT_1009a4f90;
  _swift_allocObject(&DAT_1009a4f90,0x18,7);
  _swift_weakInit(puVar4 + 0x10,lVar2);
  puVar5 = &DAT_1009a4fb8;
  _swift_allocObject(&DAT_1009a4fb8,0x28,7);
  uVar1 = local_88;
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = local_98;
  *(undefined8 *)(puVar5 + 0x20) = local_88;
  puVar3 = &DAT_1009a4fe0;
  _swift_allocObject(&DAT_1009a4fe0,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10003e958;
  *(undefined **)(puVar3 + 0x18) = puVar5;
  puVar6 = &DAT_100a759a0;
  FUN_100004bb4(&DAT_100a759a0,&DAT_100809a60);
  _swift_allocObject();
  puVar6[0x10] = 0;
  *(code **)(puVar6 + 0x18) = FUN_10003e988;
  *(undefined **)(puVar6 + 0x20) = puVar3;
  puVar3 = &DAT_1009a5008;
  _swift_allocObject(&DAT_1009a5008,0x18,7);
  _swift_weakInit(puVar3 + 0x10,uVar8);
  puVar7 = &DAT_1009a5030;
  _swift_allocObject(&DAT_1009a5030,0x51,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  *(undefined8 *)(puVar7 + 0x20) = param_1;
  *(undefined8 *)(puVar7 + 0x28) = local_90;
  *(undefined8 *)(puVar7 + 0x30) = local_a0;
  puVar7[0x38] = (byte)local_7c & 1;
  *(undefined8 *)(puVar7 + 0x40) = local_a8;
  *(undefined8 *)(puVar7 + 0x48) = param_6;
  puVar7[0x50] = (char)local_ac;
  _swift_retain_n(puVar6,2);
  _swift_retain(puVar4);
  _swift_retain(uVar1);
  _swift_retain(puVar5);
  _swift_retain(puVar3);
  _swift_bridgeObjectRetain(param_6);
  FUN_10004e434(FUN_10003e990,puVar6,FUN_10003e9cc,puVar7);
  _swift_release(lVar2);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release_n(puVar6,2);
  _swift_release(puVar3);
  _swift_release(puVar7);
  return;
}

