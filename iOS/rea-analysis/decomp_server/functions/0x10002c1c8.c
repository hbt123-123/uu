// rea decompile_all
// name: FUN_10002c1c8
// address: 0x10002c1c8
// body: available
// range: 0x10002c1c8-0x10002c4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002c1c8(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  long lVar11;
  void *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 auStack_c0 [16];
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  local_c8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c4 = (int)param_1;
  FUN_1000177d8(param_1,0x646563616c706572,0xe800000000000000);
  lVar4 = *(long *)(unaff_x20 + 0xc0) + 1;
  *(long *)(unaff_x20 + 0xc0) = lVar4;
  puVar5 = &DAT_100997520;
  _swift_allocObject(&DAT_100997520,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar6 = &DAT_100997660;
  _swift_allocObject(&DAT_100997660,0x2c,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(int *)(puVar6 + 0x18) = (int)param_1;
  *(long *)(puVar6 + 0x20) = lVar4;
  *(undefined4 *)(puVar6 + 0x28) = param_2;
  local_70 = FUN_10003f990;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_100997678;
  local_68 = puVar6;
  local_d0 = __Block_copy(&local_90);
  puVar7 = puVar5;
  _swift_retain(puVar5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar6 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar8 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&local_98,puVar6,puVar8,lVar3,puVar7);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar11,lVar10,local_d0);
  puVar6 = local_68;
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_beginAccess(unaff_x20 + 0xb8,&local_90,0x21,0);
  _swift_retain(lVar11);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xb8);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  uVar2 = local_c4;
  uVar1 = local_c8;
  local_98 = *(undefined **)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0x8000000000000000;
  FUN_100060e34(lVar4,local_c8,lVar11,local_c4,uVar9);
  *(undefined **)(unaff_x20 + 0xb8) = local_98;
  _swift_endAccess(&local_90);
  FUN_100401b14(0);
  local_b0 = uVar1;
  uStack_ac = uVar2;
  local_a8 = lVar4;
  FUN_1003fb4bc(FUN_10003f9a4,auStack_c0,0xd0000000000000a9,0x8000000100877660,&DAT_d000000000000033
                ,0x8000000100878f30,0x7bc,0);
  (**(code **)(unaff_x20 + 0x60))(0x3fe6666666666666,lVar11);
  _swift_release(lVar11);
  return;
}

