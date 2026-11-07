// rea decompile_all
// name: FUN_10013c050
// address: 0x10013c050
// body: available
// range: 0x10013c050-0x10013c307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10013c050(undefined4 param_1)

{
  ulong uVar1;
  long lVar2;
  mach_header *pmVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  mach_header *pmVar10;
  long *plVar11;
  code *pcVar12;
  undefined4 local_130;
  undefined4 uStack_12c;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar9 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  local_130 = param_1;
  _swift_retain(uVar9);
  FUN_1003e37e8(&local_128,&local_130);
  _swift_release(uVar9);
  lVar2 = local_128;
  if (local_128 != 0) {
    pmVar10 = *(mach_header **)(local_128 + 0x10);
    pcVar12 = *(code **)(*(long *)pmVar10 + 0xa8);
    pmVar3 = pmVar10;
    _swift_retain();
    (*pcVar12)();
    _swift_release(pmVar10);
    if ((long)pmVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10013c2f0);
      (*pcVar12)();
    }
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (pmVar3 != (mach_header *)0x0) {
      FUN_100145750(&local_128);
      pmVar10 = (mach_header *)0x0;
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      do {
        plVar11 = *(long **)(lVar2 + 0x10);
        pcVar12 = *(code **)(*plVar11 + 0x90);
        _swift_retain(plVar11);
        (*pcVar12)(&local_130,pmVar10);
        _swift_release(plVar11);
        uVar9 = CONCAT44(uStack_12c,local_130);
        lVar4 = 0;
        FUN_10016dae4();
        _swift_allocObject();
        *(undefined8 *)(lVar4 + 0x130) = uStack_90;
        *(undefined8 *)(lVar4 + 0x128) = uStack_98;
        *(undefined8 *)(lVar4 + 0x140) = uStack_80;
        *(undefined8 *)(lVar4 + 0x138) = local_88;
        *(undefined8 *)(lVar4 + 0x150) = uStack_70;
        *(undefined8 *)(lVar4 + 0x148) = uStack_78;
        *(undefined8 *)(lVar4 + 0xe0) = uStack_e0;
        *(undefined8 *)(lVar4 + 0xd8) = local_e8;
        *(undefined8 *)(lVar4 + 0xf0) = uStack_d0;
        *(undefined8 *)(lVar4 + 0xe8) = local_d8;
        *(undefined8 *)(lVar4 + 0x100) = uStack_c0;
        *(undefined8 *)(lVar4 + 0xf8) = local_c8;
        *(undefined8 *)(lVar4 + 0x110) = uStack_b0;
        *(undefined8 *)(lVar4 + 0x108) = local_b8;
        *(undefined8 *)(lVar4 + 0x120) = uStack_a0;
        *(undefined8 *)(lVar4 + 0x118) = local_a8;
        *(undefined8 *)(lVar4 + 0xa0) = uStack_120;
        *(long *)(lVar4 + 0x98) = local_128;
        *(undefined8 *)(lVar4 + 0xb0) = uStack_110;
        *(undefined8 *)(lVar4 + 0xa8) = local_118;
        *(undefined8 *)(lVar4 + 0xc0) = uStack_100;
        *(undefined8 *)(lVar4 + 0xb8) = local_108;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined8 *)(lVar4 + 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x58) = 0;
        *(undefined8 *)(lVar4 + 0x50) = 0;
        *(undefined8 *)(lVar4 + 0x60) = 0;
        *(undefined8 *)(lVar4 + 0x68) = 0xf000000000000000;
        *(undefined8 *)(lVar4 + 0x70) = 0;
        *(undefined8 *)(lVar4 + 0x78) = 0;
        *(undefined4 *)(lVar4 + 0x90) = 0;
        *(undefined8 *)(lVar4 + 0xd0) = uStack_f0;
        *(undefined8 *)(lVar4 + 200) = local_f8;
        *(undefined8 *)(lVar4 + 0x158) = 0;
        *(undefined4 *)(lVar4 + 0x160) = 0;
        *(undefined1 *)(lVar4 + 0x164) = 0;
        *(undefined1 *)(lVar4 + 0x18) = 3;
        *(undefined4 *)(lVar4 + 0x14) = param_1;
        *(undefined8 *)(lVar4 + 0x80) = 0xf000000000000000;
        *(undefined8 *)(lVar4 + 0x88) = uVar9;
        if (pmVar10 == &__mh_execute_header) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10013c2ec);
          (*pcVar12)();
        }
        *(int *)(lVar4 + 0x90) = (int)pmVar10;
        _swift_retain(uVar9);
        _swift_retain(lVar4);
        puVar6 = puVar7;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
           (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((long)puVar7 < 0) {
              puVar5 = puVar7;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
          }
          puVar6 = (undefined *)0x0;
          FUN_1000358f0(0,puVar5 + 1,1,puVar7);
        }
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar8 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_1000358f0(puVar7,uVar1 + 1,1,puVar6);
          uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
        }
        pmVar10 = (mach_header *)((long)&pmVar10->magic + 1);
        *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
        *(long *)(uVar8 + uVar1 * 8 + 0x20) = lVar4;
        _swift_release(lVar4);
        _swift_release(uVar9);
      } while (pmVar3 != pmVar10);
    }
    if ((ulong)puVar7 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((long)puVar7 < 0) {
        puVar6 = puVar7;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_release(lVar2);
    if (puVar6 != (undefined *)0x0) {
      return puVar7;
    }
    _swift_bridgeObjectRelease(puVar7);
  }
  return (undefined *)0x0;
}

