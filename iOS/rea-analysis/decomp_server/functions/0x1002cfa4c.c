// rea decompile_all
// name: FUN_1002cfa4c
// address: 0x1002cfa4c
// body: available
// range: 0x1002cfa4c-0x1002cffcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002cfa4c(byte *param_1,ID param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_e0 [8];
  long local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar6 + -8);
  puVar14 = auStack_e0 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar7 + -8);
  lVar18 = (long)puVar14 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100339e44();
  uVar12 = *(ulong *)(param_1 + 0x150);
  uVar16 = uVar12 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar16 + 0x10);
  if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar1) {
    uVar12 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
    FUN_100296da8(uVar12,uVar1 + 1,1);
    uVar16 = uVar12 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar16 + 0x10) = uVar1 + 1;
  *(ID *)(uVar16 + uVar1 * 8 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x150) = uVar12;
  lVar17 = *(long *)(param_1 + 0xb8);
  if (lVar17 == 0) {
    lVar17 = *(long *)(param_1 + 0x108);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 200);
    puVar8 = &DAT_1009adea0;
    _swift_allocObject(&DAT_1009adea0,0x30,7);
    *(long *)(puVar8 + 0x10) = lVar17;
    *(undefined8 *)(puVar8 + 0x18) = uVar2;
    *(undefined8 *)(puVar8 + 0x20) = uVar3;
    *(ID *)(puVar8 + 0x28) = param_2;
    local_70 = FUN_1002d87ec;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    local_78 = &DAT_1009adeb8;
    local_68 = puVar8;
    local_d0 = __Block_copy(&local_90);
    FUN_1002d8884(lVar17,uVar2,uVar3);
    local_d8 = lVar17;
    _swift_retain(uVar3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar18);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar8 = &DAT_100a82c18;
    local_c8 = param_3;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar10 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar14,&local_58,puVar8,puVar10,lVar6,puVar9);
    pvVar11 = local_d0;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar18,puVar14,local_d0);
    __Block_release(pvVar11);
    _swift_release(uVar3);
    param_3 = local_c8;
    (**(code **)(lVar13 + 8))(puVar14,lVar6);
    (**(code **)(lVar15 + 8))(lVar18,lVar7);
    _swift_release(local_68);
    lVar17 = *(long *)(param_1 + 0x108);
  }
  if (lVar17 != 0) {
    FUN_1000b142c(param_1 + 0xf0,&local_90);
    pcVar5 = local_70;
    puVar8 = local_78;
    FUN_10003f030(&local_90,local_78);
    (**(code **)(pcVar5 + 0xa8))(param_3,param_2,puVar8,pcVar5);
    FUN_10003f094(&local_90);
  }
  bVar4 = *param_1;
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      return;
    }
    _objc_msgSend(param_2,"resume");
    puVar8 = &DAT_1009ade50;
    _swift_allocObject(&DAT_1009ade50,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = param_3;
    *(ID *)(puVar8 + 0x18) = param_2;
    local_70 = FUN_1002d8794;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_78 = &DAT_1009ade68;
    local_68 = puVar8;
  }
  else if (bVar4 == 2) {
    _objc_msgSend(param_2,"suspend");
    puVar8 = &DAT_1009ade00;
    _swift_allocObject(&DAT_1009ade00,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = param_3;
    *(ID *)(puVar8 + 0x18) = param_2;
    local_70 = FUN_1002d8770;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_78 = &DAT_1009ade18;
    local_68 = puVar8;
  }
  else {
    if (bVar4 != 3) {
      return;
    }
    _objc_msgSend(param_2,"resume");
    _objc_msgSend(param_2,"cancel");
    puVar8 = &DAT_1009addb0;
    _swift_allocObject(&DAT_1009addb0,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = param_3;
    *(ID *)(puVar8 + 0x18) = param_2;
    local_70 = FUN_1002d874c;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_78 = &DAT_1009addc8;
    local_68 = puVar8;
  }
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  PTR___NSConcreteStackBlock_100995490 = local_90;
  pvVar11 = __Block_copy(&local_90);
  _swift_retain(param_3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar18);
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar9 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar8 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar10 = &DAT_100a82c20;
  FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar14,&local_58,puVar8,puVar10,lVar6,puVar9);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar18,puVar14,pvVar11);
  __Block_release(pvVar11);
  (**(code **)(lVar13 + 8))(puVar14,lVar6);
  (**(code **)(lVar15 + 8))(lVar18,lVar7);
  _swift_release(local_68);
  return;
}

