// rea decompile_all
// name: FUN_10023bde4
// address: 0x10023bde4
// body: available
// range: 0x10023bde4-0x10023c0bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10023bde4(void)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_50 [8];
  ID local_48;
  
  uVar1 = 0xb;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xb,0,0);
  if ((uVar1 & 1) == 0) {
    IVar2 = ASIdentifierManager::sharedManager
                      ((ID)&_OBJC_CLASS___ASIdentifierManager,"sharedManager");
    IVar2 = ASIdentifierManager::isAdvertisingTrackingEnabled(IVar2,"isAdvertisingTrackingEnabled");
    if ((int)IVar2 != 0) {
      puVar3 = &DAT_100a7f760;
      FUN_100004bb4(&DAT_100a7f760,&DAT_100813f30);
      (*(code *)PTR____chkstk_darwin_100995498)
                (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar6 = auStack_50 + -extraout_x8_00;
      IVar2 = ASIdentifierManager::sharedManager
                        ((ID)&_OBJC_CLASS___ASIdentifierManager,"sharedManager");
      goto LAB_10023bf28;
    }
  }
  else {
    IVar2 = ATTrackingManager::trackingAuthorizationStatus
                      ((ID)&_OBJC_CLASS___ATTrackingManager,"trackingAuthorizationStatus");
    if ((IVar2 | 2) != 2) {
      puVar3 = &DAT_100a7f760;
      FUN_100004bb4(&DAT_100a7f760,&DAT_100813f30);
      (*(code *)PTR____chkstk_darwin_100995498)
                (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar6 = auStack_50 + -extraout_x8;
      IVar2 = ASIdentifierManager::sharedManager
                        ((ID)&_OBJC_CLASS___ASIdentifierManager,"sharedManager");
LAB_10023bf28:
      _objc_retainAutorelease();
      IVar2 = _objc_msgSend(IVar2,"performSelector:","advertisingIdentifier");
      if (IVar2 == 0) {
        lVar4 = 0;
        __s10Foundation4UUIDVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar6,1,1,lVar4);
      }
      else {
        _swift_unknownObjectRetain();
        lVar4 = 0;
        local_48 = IVar2;
        __s10Foundation4UUIDVMa();
        puVar5 = puVar6;
        _swift_dynamicCast(puVar6,&local_48,PTR___syXlN_100995e80 + 8,lVar4,6);
        lVar8 = *(long *)(lVar4 + -8);
        (**(code **)(lVar8 + 0x38))(puVar6,(uint)puVar5 ^ 1,1,lVar4);
        lVar7 = 1;
        puVar5 = puVar6;
        (**(code **)(lVar8 + 0x30))(puVar6,1,lVar4);
        if ((int)puVar5 != 1) {
          __s10Foundation4UUIDV10uuidStringSSvg();
          (**(code **)(lVar8 + 8))(puVar6,lVar4);
          if ((puVar5 == (undefined1 *)0xd000000000000024) && (lVar7 == -0x7ffffffeff758bd0)) {
            _swift_bridgeObjectRelease(0x80000001008a7430);
            _swift_bridgeObjectRelease(0x80000001008a7430);
          }
          else {
            puVar6 = puVar5;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (puVar5,lVar7,0xd000000000000024,0x80000001008a7430,0);
            _swift_bridgeObjectRelease(0x80000001008a7430);
            if (((ulong)puVar6 & 1) == 0) goto LAB_10023c064;
            _swift_bridgeObjectRelease(lVar7);
          }
          goto LAB_10023c05c;
        }
      }
      FUN_10023c0bc(puVar6);
    }
  }
LAB_10023c05c:
  puVar5 = (undefined1 *)0x0;
  lVar7 = 0;
LAB_10023c064:
  auVar9._8_8_ = lVar7;
  auVar9._0_8_ = puVar5;
  return auVar9;
}

