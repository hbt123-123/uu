// rea decompile_all
// name: FUN_1002d1d74
// address: 0x1002d1d74
// body: available
// range: 0x1002d1d74-0x1002d2067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d1d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar16 = *(long *)(lVar4 + -8);
  lVar11 = (long)&local_d0 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar5 + -8);
  lVar13 = lVar11 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = *(ulong *)(param_1 + 0x150);
  if (uVar14 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar14 & 0xffffffffffffff8;
    if ((long)uVar14 < 0) {
      uVar6 = uVar14;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if (SBORROW8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d2044);
      (*pcVar3)();
    }
    local_c8 = lVar16;
    local_c0 = lVar4;
    local_b8 = param_2;
    if ((uVar14 & 0xc000000000000001) == 0) {
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d2064);
        (*pcVar3)();
      }
      if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002d2068);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(uVar14 + uVar7 * 8 + 0x20);
    }
    else {
      FUN_100169c28(uVar7,uVar14,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00,&DAT_100a82760);
    }
    puVar8 = &DAT_1009ae1c0;
    _swift_allocObject(&DAT_1009ae1c0,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = param_3;
    *(undefined8 *)(puVar8 + 0x18) = param_4;
    *(ulong *)(puVar8 + 0x20) = uVar7;
    local_70 = FUN_1001fa3a4;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009ae1d8;
    local_68 = puVar8;
    aBlock = __Block_copy(&local_90);
    _swift_retain(param_4);
    local_d0 = uVar7;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar8 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar10 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    lVar4 = local_c0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&local_58,puVar8,puVar10,local_c0,puVar9);
    param_2 = local_b8;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,lVar11,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_c8 + 8))(lVar11,lVar4);
    (**(code **)(lVar12 + 8))(lVar13,lVar5);
    _swift_release(local_68);
  }
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uVar15 = *(undefined8 *)(param_1 + 200);
  _swift_retain(param_4);
  FUN_10028a014(uVar1,uVar2,uVar15);
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  *(undefined8 *)(param_1 + 200) = param_4;
  return;
}

