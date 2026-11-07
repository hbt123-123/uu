// rea decompile_all
// name: FUN_10002c4e8
// address: 0x10002c4e8
// body: available
// range: 0x10002c4e8-0x10002c827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002c4e8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined4 uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_130 [16];
  undefined8 auStack_120 [2];
  undefined4 auStack_110 [4];
  undefined1 auStack_100 [8];
  undefined8 auStack_f8 [3];
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar13 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(unaff_x20 + 0xf4) & 1) == 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + 0xd8);
    local_b8 = *(undefined8 *)(unaff_x20 + 0xe0);
    local_ac = *(undefined4 *)(unaff_x20 + 0xf0);
    uStack_bc = *(undefined4 *)(unaff_x20 + 0xe8);
    local_c0 = *(undefined4 *)(unaff_x20 + 0xec);
    lVar10 = *(long *)(unaff_x20 + 0xf8);
    local_a8 = param_3;
    uStack_a0 = param_4;
    if (lVar10 != 0) {
      _swift_retain(lVar10);
      __s8Dispatch0A8WorkItemC6cancelyyFTj();
      _swift_release(lVar10);
    }
    uVar11 = param_1 >> 0x20 & 1;
    puVar4 = &DAT_100997520;
    local_c8 = uVar11;
    _swift_allocObject(&DAT_100997520,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    puVar5 = &DAT_1009976b0;
    _swift_allocObject(&DAT_1009976b0,0x30,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar12;
    *(int *)(puVar5 + 0x20) = (int)param_1;
    puVar5[0x24] = (char)uVar11;
    *(undefined8 *)(puVar5 + 0x28) = param_2;
    local_70 = FUN_10003fb48;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009976c8;
    local_68 = puVar5;
    pvVar6 = __Block_copy(&local_90);
    puVar7 = puVar4;
    local_d0 = uVar12;
    _swift_retain(puVar4);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
    local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar5 = &DAT_100a75a98;
    local_e0 = param_1;
    local_d8 = param_2;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar8 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar13,&local_98,puVar5,puVar8,lVar2,puVar7);
    __s8Dispatch0A8WorkItemCMa();
    _swift_allocObject();
    lVar2 = lVar3;
    __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar3,lVar13,pvVar6);
    puVar5 = local_68;
    _swift_release(puVar4);
    _swift_release(puVar5);
    uVar12 = *(undefined8 *)(unaff_x20 + 0xf8);
    *(long *)(unaff_x20 + 0xf8) = lVar2;
    _swift_retain(lVar2);
    _swift_release(uVar12);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar1 = local_b8;
    uVar12 = local_d8;
    *(undefined8 *)(lVar3 + -0x40) = local_d0;
    *(undefined8 *)(lVar3 + -0x38) = uVar1;
    uVar9 = local_c0;
    *(undefined4 *)(lVar3 + -0x30) = uStack_bc;
    *(undefined4 *)(lVar3 + -0x2c) = uVar9;
    uVar9 = (undefined4)local_e0;
    *(undefined4 *)(lVar3 + -0x28) = local_ac;
    *(undefined4 *)(lVar3 + -0x24) = uVar9;
    *(char *)(lVar3 + -0x20) = (char)local_c8;
    *(undefined8 *)(lVar3 + -0x18) = uVar12;
    uVar12 = uStack_a0;
    *(undefined8 *)(lVar3 + -0x10) = local_a8;
    *(undefined8 *)(lVar3 + -8) = uVar12;
    FUN_1003fb48c(FUN_10003fb70,lVar3 + -0x50,0xd0000000000000a9,0x8000000100877660,
                  0xd00000000000004e,0x8000000100879660,0x72b,0);
    (**(code **)(unaff_x20 + 0x70))(0x3fd6666666666666,lVar2);
    _swift_release(lVar2);
  }
  return;
}

