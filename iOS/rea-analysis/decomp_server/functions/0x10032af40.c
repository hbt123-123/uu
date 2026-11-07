// rea decompile_all
// name: FUN_10032af40
// address: 0x10032af40
// body: available
// range: 0x10032af40-0x10032b19f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10032af40(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_88 = *(long *)(lVar2 + -8);
  lVar9 = (long)&local_90 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_80 = lVar9;
  local_78 = lVar2;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar9 = lVar9 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar2 = lVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_10004003c(0,&DAT_100a82228,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  local_70 = (undefined *)0x0;
  local_68 = 0xe000000000000000;
  local_90 = uVar4;
  __ss11_StringGutsV4growyySiF(0x31);
  _swift_bridgeObjectRelease(local_68);
  local_70 = (undefined *)0xd00000000000002f;
  local_68 = 0x80000001008aa930;
  uVar4 = 0;
  __s10Foundation4UUIDVMa(0);
  puVar5 = &DAT_100a85fe8;
  FUN_100005c90(&DAT_100a85fe8,PTR___s10Foundation4UUIDVMa_100996230,
                PTR___s10Foundation4UUIDVs23CustomStringConvertibleAAMc_100996260);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(uVar4,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  uVar4 = local_68;
  puVar5 = local_70;
  if (DAT_100a81ba0 != -1) {
    _swift_once(&DAT_100a81ba0,FUN_1003288f4);
  }
  uVar1 = DAT_100a85bf0;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2,DAT_100a85bf0);
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82230;
  FUN_100005c90(&DAT_100a82230,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar7 = &DAT_100a82238;
  FUN_100004bb4(&DAT_100a82238,&DAT_100819bc0);
  puVar8 = &DAT_100a82240;
  FUN_1000d61d8(&DAT_100a82240,&DAT_100a82238,&DAT_100819bc0);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar9,&local_70,puVar7,puVar8,lVar3,puVar6);
  lVar3 = local_80;
  (**(code **)(local_88 + 0x68))
            (local_80,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,local_78);
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (puVar5,uVar4,lVar2,lVar9,lVar3,uVar1);
  return;
}

