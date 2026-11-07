// rea decompile_all
// name: FUN_100149be8
// address: 0x100149be8
// body: available
// range: 0x100149be8-0x100149deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100149be8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_80;
  char *local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::___lazy_storage___commonQueue;
  lVar9 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::
                   ___lazy_storage___commonQueue);
  if (lVar4 == 0) {
    FUN_100004b70();
    local_78 = s_______100892f00 + 0x20;
    lStack_70 = lVar4;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar5 = &DAT_100a750d0;
    FUN_100005c90(&DAT_100a750d0,PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88,
                  PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
    puVar6 = &DAT_100a750d8;
    local_80 = puVar5;
    FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
    puVar5 = &DAT_100a750e0;
    FUN_10003f840(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar8,&local_68,puVar6,puVar5,lVar2,local_80);
    (**(code **)(lVar10 + 0x68))
              (lVar7,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar1);
    lVar4 = -0x2fffffffffffffd7;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd000000000000029,(ulong)local_78 | 0x8000000000000000,lVar9,lVar8,lVar7,0);
    *(long *)(unaff_x20 + lVar3) = lVar4;
  }
  return lVar4;
}

