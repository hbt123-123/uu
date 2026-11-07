// rea decompile_all
// name: FUN_1002584ec
// address: 0x1002584ec
// body: available
// range: 0x1002584ec-0x10025881f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1002584ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *value;
  dispatch_semaphore_t pdVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  long unaff_x20;
  long *plVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined *local_78 [3];
  
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar18 = *(long *)(lVar1 + -8);
  puVar13 = auStack_a0 + -(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar15 = (long)puVar13 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar3 = lVar15 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_100254330(0);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  local_78[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100254374();
  puVar5 = &DAT_100a80038;
  FUN_100004bb4(&DAT_100a80038,&DAT_100814740);
  puVar6 = puVar5;
  FUN_1002543b8();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj(lVar15,local_78,puVar5,puVar6,lVar2,uVar4)
  ;
  (**(code **)(lVar18 + 0x68))
            (puVar13,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lVar1);
  uVar4 = 0xd000000000000011;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000011,0x80000001008a7f70,lVar3,lVar15,puVar13,0);
  puVar14 = (ulong *)(unaff_x20 + 0x20);
  *puVar14 = (ulong)PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  if (DAT_100a7fea0 != -1) {
    _swift_once(&DAT_100a7fea0,FUN_10025674c);
  }
  plVar12 = *(long **)(DAT_100b36400 + 0x10);
  pcVar11 = *(code **)(*plVar12 + 0xe0);
  value = plVar12;
  _swift_retain();
  (*pcVar11)();
  _swift_release(plVar12);
  pdVar7 = _dispatch_semaphore_create((long)value);
  *(dispatch_semaphore_t *)(unaff_x20 + 0x18) = pdVar7;
  _swift_beginAccess(puVar14,local_78,0x21,0);
  FUN_1002583bc(value);
  _swift_endAccess(local_78);
  if ((long)value < 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100258820);
    (*pcVar11)();
  }
  if (value != (long *)0x0) {
    lVar1 = 0;
    FUN_10025b0f8();
    do {
      lVar2 = lVar1;
      _swift_allocObject(lVar1,0x50,7);
      *(undefined8 *)(lVar2 + 0x28) = 0;
      puVar16 = (undefined8 *)(lVar2 + 0x20);
      *puVar16 = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0xe000000000000000;
      _swift_beginAccess(puVar16,local_78,1,0);
      *puVar16 = 0;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0xe000000000000000;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      _swift_beginAccess(puVar14,auStack_90,0x21,0);
      uVar17 = *puVar14;
      uVar9 = uVar17;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      *puVar14 = uVar17;
      if ((((int)uVar9 == 0) || ((long)uVar17 < 0)) || (uVar9 = uVar17, (uVar17 >> 0x3e & 1) != 0))
      {
        if (uVar17 >> 0x3e == 0) {
          uVar8 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar8 = uVar17 & 0xffffffffffffff8;
          if ((long)uVar17 < 0) {
            uVar8 = uVar17;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(uVar8);
        }
        uVar9 = 0;
        FUN_10025d32c(0,uVar8 + 1,1,uVar17);
        *puVar14 = uVar9;
      }
      uVar10 = uVar9 & 0xffffffffffffff8;
      uVar17 = *(ulong *)(uVar10 + 0x10);
      uVar8 = uVar9;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar17) {
        uVar8 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_10025d32c(uVar8,uVar17 + 1,1,uVar9);
        uVar10 = uVar8 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar10 + 0x10) = uVar17 + 1;
      *(long *)(uVar10 + uVar17 * 8 + 0x20) = lVar2;
      *puVar14 = uVar8;
      _swift_endAccess(auStack_90);
      value = (long *)((long)value + -1);
    } while (value != (long *)0x0);
  }
  return unaff_x20;
}

