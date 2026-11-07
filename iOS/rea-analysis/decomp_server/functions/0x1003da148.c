// rea decompile_all
// name: FUN_1003da148
// address: 0x1003da148
// body: available
// range: 0x1003da148-0x1003da9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003da9a4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003da148(ulong *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  size_t *psVar5;
  size_t sVar6;
  size_t sVar7;
  size_t *psVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  size_t local_98 [2];
  undefined4 local_88;
  int local_84;
  size_t local_80;
  void *local_78;
  size_t local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_70 = 0;
  iVar2 = _sysctlbyname("hw.model",(void *)0x0,&local_70,(void *)0x0,0);
  sVar7 = local_70;
  if ((iVar2 == 0) && (0 < (long)local_70)) {
    sVar6 = local_70;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (local_70,PTR___ss4Int8VN_100995c20);
    *(size_t *)(sVar6 + 0x10) = sVar7;
    _bzero((void *)(sVar6 + 0x20),sVar7);
    pvVar12 = (void *)(sVar6 + 0x20);
    iVar2 = _sysctlbyname("hw.model",pvVar12,&local_70,(void *)0x0,0);
    if (iVar2 != 0) {
      _swift_bridgeObjectRelease(sVar6);
      local_80 = 0;
      local_78 = (void *)0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x22);
      _swift_bridgeObjectRelease();
      uVar3 = SUB84(local_78,0);
      pcVar13 = s_IOPlatformExpertDevice_1008b4990 + 0x10;
      local_80 = 0x1000000000000020;
      goto LAB_1003da1dc;
    }
    uVar4 = 0x657261774d56;
    sVar7 = sVar6;
    FUN_100108560();
    _swift_bridgeObjectRelease(sVar6);
    local_98[0] = 0x657261774d56;
    local_98[1] = 0xe600000000000000;
    local_80 = sVar7;
    local_78 = pvVar12;
    FUN_10009ff0c();
    psVar8 = local_98;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (psVar8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,sVar6,sVar6);
    if (((ulong)psVar8 & 1) != 0) {
      _swift_bridgeObjectRelease(pvVar12);
      uVar11 = 0xe600000000000000;
      goto LAB_1003da84c;
    }
    local_98[0] = 0x6c656c6c61726150;
    local_98[1] = 0xe900000000000073;
    psVar8 = local_98;
    local_80 = sVar7;
    local_78 = pvVar12;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (psVar8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,sVar6,sVar6);
    if (((ulong)psVar8 & 1) == 0) {
      local_98[0] = 0x554d4551;
      local_98[1] = 0xe400000000000000;
      psVar8 = local_98;
      local_80 = sVar7;
      local_78 = pvVar12;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (psVar8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,sVar6,sVar6);
      _swift_bridgeObjectRelease(pvVar12);
      uVar11 = 0xe400000000000000;
      uVar4 = 0x554d4551;
      if (((ulong)psVar8 & 1) != 0) goto LAB_1003da84c;
      goto LAB_1003da254;
    }
    _swift_bridgeObjectRelease(pvVar12);
LAB_1003da78c:
    uVar4 = 0x6c656c6c61726150;
    uVar11 = 0xe900000000000073;
    goto LAB_1003da84c;
  }
  local_80 = 0;
  local_78 = (void *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x25);
  _swift_bridgeObjectRelease();
  uVar3 = SUB84(local_78,0);
  pcVar13 = "osversion";
  local_80 = 0x1000000000000023;
LAB_1003da1dc:
  local_78 = (void *)((ulong)pcVar13 | 0x8000000000000000);
  __s6Darwin5errnos5Int32Vvg();
  local_98[0] = CONCAT44(local_98[0]._4_4_,uVar3);
  puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  pvVar12 = local_78;
  sVar7 = local_80;
  uVar15 = *param_1;
  uVar17 = uVar15;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_1 = uVar15;
  uVar9 = uVar15;
  if ((uVar17 & 1) == 0) {
    uVar9 = 0;
    FUN_10039e800(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
    *param_1 = uVar9;
  }
  uVar17 = *(ulong *)(uVar9 + 0x10);
  uVar15 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar17) {
    uVar15 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_10039e800(uVar15,uVar17 + 1,1,uVar9);
    *param_1 = uVar15;
  }
  *(ulong *)(uVar15 + 0x10) = uVar17 + 1;
  lVar14 = uVar15 + uVar17 * 0x18;
  *(undefined1 *)(lVar14 + 0x20) = 1;
  *(size_t *)(lVar14 + 0x28) = sVar7;
  *(void **)(lVar14 + 0x30) = pvVar12;
LAB_1003da254:
  pcVar13 = "IOPlatformExpertDevice";
  _IOServiceMatching("IOPlatformExpertDevice");
  uVar17 = 0;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xc,0,0);
  puVar1 = (uint *)PTR__kIOMainPortDefault_100995600;
  if ((uVar17 & 1) == 0) {
    puVar1 = (uint *)PTR__kIOMasterPortDefault_100995608;
  }
  uVar17 = (ulong)*puVar1;
  _IOServiceGetMatchingService(uVar17,pcVar13);
  if ((int)uVar17 == 0) {
    uVar15 = *param_1;
    uVar17 = uVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_1 = uVar15;
    uVar9 = uVar15;
    if ((uVar17 & 1) == 0) {
      uVar9 = 0;
      FUN_10039e800(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
      *param_1 = uVar9;
    }
    uVar17 = *(ulong *)(uVar9 + 0x10);
    uVar15 = uVar9;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar17) {
      uVar15 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      FUN_10039e800(uVar15,uVar17 + 1,1,uVar9);
      *param_1 = uVar15;
    }
    *(ulong *)(uVar15 + 0x10) = uVar17 + 1;
    lVar14 = uVar15 + uVar17 * 0x18;
    *(undefined1 *)(lVar14 + 0x20) = 1;
    *(undefined8 *)(lVar14 + 0x28) = 0x1000000000000029;
    *(undefined8 *)(lVar14 + 0x30) = 0x80000001008b4970;
  }
  else {
    uVar4 = 0x74636166756e616d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74636166756e616d,0xec00000072657275);
    uVar9 = uVar17;
    _IORegistryEntryCreateCFProperty
              (uVar17,uVar4,*(undefined8 *)PTR__kCFAllocatorDefault_1009953c8,0);
    if (uVar9 == 0) {
LAB_1003da3ac:
      uVar16 = *param_1;
      uVar9 = uVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_1 = uVar16;
      uVar15 = uVar16;
      if ((uVar9 & 1) == 0) {
        uVar15 = 0;
        FUN_10039e800(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
        *param_1 = uVar15;
      }
      uVar9 = *(ulong *)(uVar15 + 0x10);
      uVar16 = uVar15;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar9) {
        uVar16 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_10039e800(uVar16,uVar9 + 1,1,uVar15);
        *param_1 = uVar16;
      }
      *(ulong *)(uVar16 + 0x10) = uVar9 + 1;
      lVar14 = uVar16 + uVar9 * 0x18;
      *(undefined1 *)(lVar14 + 0x20) = 0;
      *(undefined8 *)(lVar14 + 0x28) = 0x1000000000000037;
      *(undefined8 *)(lVar14 + 0x30) = 0x80000001008b48e0;
    }
    else {
      psVar8 = &local_80;
      local_98[0] = uVar9;
      _swift_dynamicCast(psVar8,local_98,PTR___syXlN_100995e80 + 8,PTR___sSSN_1009957f8,6);
      pvVar12 = local_78;
      sVar7 = local_80;
      if (((ulong)psVar8 & 1) == 0) goto LAB_1003da3ac;
      local_98[0] = 0x6b65746f6e6e69;
      local_98[1] = 0xe700000000000000;
      FUN_10009ff0c();
      psVar5 = local_98;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (psVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,psVar8,psVar8);
      if (((ulong)psVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(pvVar12);
        _IOObjectRelease(uVar17);
        uVar11 = 0xea0000000000786f;
        uVar4 = 0x426c617574726956;
        goto LAB_1003da84c;
      }
      uVar4 = 0x657261774d56;
      local_98[0] = 0x657261774d56;
      local_98[1] = 0xe600000000000000;
      psVar5 = local_98;
      local_80 = sVar7;
      local_78 = pvVar12;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (psVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,psVar8,psVar8);
      if (((ulong)psVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(pvVar12);
        _IOObjectRelease(uVar17);
        uVar11 = 0xe600000000000000;
        goto LAB_1003da84c;
      }
      local_98[0] = 0x6c656c6c61726150;
      local_98[1] = 0xe900000000000073;
      psVar5 = local_98;
      local_80 = sVar7;
      local_78 = pvVar12;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (psVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,psVar8,psVar8);
      if (((ulong)psVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(pvVar12);
        _IOObjectRelease(uVar17);
        goto LAB_1003da78c;
      }
      local_98[0] = 0x554d4551;
      local_98[1] = 0xe400000000000000;
      psVar5 = local_98;
      local_80 = sVar7;
      local_78 = pvVar12;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (psVar5,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,psVar8,psVar8);
      _swift_bridgeObjectRelease(pvVar12);
      if (((ulong)psVar5 & 1) != 0) {
        _IOObjectRelease(uVar17);
        uVar11 = 0xe400000000000000;
        uVar4 = 0x554d4551;
        goto LAB_1003da84c;
      }
    }
    _IOObjectRelease(uVar17);
  }
  local_84 = 0;
  local_98[0] = 4;
  iVar2 = _sysctlbyname("kern.hv_vmm_present",&local_84,local_98,(void *)0x0,0);
  if (iVar2 == 0) {
    if (local_84 != 0) {
      uVar11 = 0xe600000000000000;
      uVar4 = 0x73726568746f;
      goto LAB_1003da84c;
    }
  }
  else {
    local_80 = 0;
    local_78 = (void *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2a);
    _swift_bridgeObjectRelease();
    uVar3 = SUB84(local_78,0);
    local_80 = 0x1000000000000028;
    local_78 = (void *)0x80000001008b4940;
    __s6Darwin5errnos5Int32Vvg();
    puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    local_88 = uVar3;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar10);
    pvVar12 = local_78;
    sVar7 = local_80;
    uVar15 = *param_1;
    uVar17 = uVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_1 = uVar15;
    uVar9 = uVar15;
    if ((uVar17 & 1) == 0) {
      uVar9 = 0;
      FUN_10039e800(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
      *param_1 = uVar9;
    }
    uVar17 = *(ulong *)(uVar9 + 0x10);
    uVar15 = uVar9;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar17) {
      uVar15 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      FUN_10039e800(uVar15,uVar17 + 1,1,uVar9);
      *param_1 = uVar15;
    }
    *(ulong *)(uVar15 + 0x10) = uVar17 + 1;
    lVar14 = uVar15 + uVar17 * 0x18;
    *(undefined1 *)(lVar14 + 0x20) = 1;
    *(size_t *)(lVar14 + 0x28) = sVar7;
    *(void **)(lVar14 + 0x30) = pvVar12;
  }
  uVar11 = 0xe800000000000000;
  uVar4 = 0x6c61636973796870;
LAB_1003da84c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4,uVar11);
}

