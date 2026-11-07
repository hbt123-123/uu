// rea decompile_all
// name: FUN_10001471c
// address: 0x10001471c
// body: available
// range: 0x10001471c-0x100014a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001471c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  byte local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar2 = PTR___sSiN_100995968;
  local_98 = param_8;
  local_90 = param_3;
  local_88 = param_2;
  local_7c = param_4;
  if ((param_4 & 1) == 0) {
    puVar1 = PTR___sSiN_100995968;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_78 = param_2;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    local_70 = puVar1;
    puStack_68 = puVar4;
    __sSS6appendyySSF(0x78,0xe100000000000000);
    local_78 = param_3;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar3);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
    puVar2 = puStack_68;
    puStack_c8 = local_70;
  }
  else {
    puVar2 = (undefined *)0xe300000000000000;
    puStack_c8 = (undefined *)0x6c696e;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_d0 = param_1;
  local_c0 = puVar2;
  uStack_b8 = param_5;
  local_b0 = param_6;
  local_a8 = param_7 & 1;
  local_a0 = param_1;
  FUN_1003fb48c(FUN_10003e918,auStack_e0,0xd0000000000000a9,0x8000000100877660,0xd000000000000052,
                0x8000000100877940,0x1d2,0);
  _swift_bridgeObjectRelease(puVar2);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar2 = &DAT_100997520;
  _swift_allocObject(&DAT_100997520,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  puVar3 = &DAT_100997570;
  _swift_allocObject(&DAT_100997570,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = local_98;
  *(undefined8 *)(puVar3 + 0x20) = param_9;
  puVar1 = &DAT_100997598;
  _swift_allocObject(&DAT_100997598,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_10003e958;
  *(undefined **)(puVar1 + 0x18) = puVar3;
  puVar4 = &DAT_100a759a0;
  FUN_100004bb4(&DAT_100a759a0,&DAT_100809a60);
  _swift_allocObject();
  puVar4[0x10] = 0;
  *(code **)(puVar4 + 0x18) = FUN_10003e988;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  puVar1 = &DAT_1009975c0;
  _swift_allocObject(&DAT_1009975c0,0x18,7);
  _swift_weakInit(puVar1 + 0x10,uVar6);
  puVar5 = &DAT_1009975e8;
  _swift_allocObject(&DAT_1009975e8,0x51,7);
  *(undefined **)(puVar5 + 0x10) = puVar1;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = local_a0;
  *(undefined8 *)(puVar5 + 0x28) = local_88;
  *(undefined8 *)(puVar5 + 0x30) = local_90;
  puVar5[0x38] = (byte)local_7c & 1;
  *(undefined8 *)(puVar5 + 0x40) = param_5;
  *(undefined8 *)(puVar5 + 0x48) = param_6;
  puVar5[0x50] = param_7 & 1;
  _swift_retain_n(puVar4,2);
  _swift_retain(puVar2);
  _swift_retain(param_9);
  _swift_retain(puVar3);
  _swift_retain(puVar1);
  _swift_bridgeObjectRetain(param_6);
  FUN_10004e434(FUN_10003e990,puVar4,FUN_10003e9cc,puVar5);
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release_n(puVar4,2);
  _swift_release(puVar1);
  _swift_release(puVar5);
  return;
}

