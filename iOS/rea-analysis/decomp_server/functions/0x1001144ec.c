// rea decompile_all
// name: FUN_1001144ec
// address: 0x1001144ec
// body: available
// range: 0x1001144ec-0x100114bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1001144ec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  ID IVar7;
  char *pcVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  ulong local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar11 - extraout_x12;
  local_98 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar9 - extraout_x12_00;
  local_90 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar9 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar9 - extraout_x12_02;
  local_80 = lVar10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_78 = lVar10 - extraout_x12_03;
  lVar10 = param_1;
  FUN_100113ef4(param_1,param_2);
  if (*(long *)(lVar10 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar10);
  }
  else {
    FUN_1001143a0(param_1);
    if (param_2 == 0) {
      _swift_bridgeObjectRelease(lVar10);
      goto LAB_100114a68;
    }
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_78);
    _swift_bridgeObjectRelease(param_2);
    local_88 = *(ulong *)(lVar10 + 0x10);
    if (local_88 == 0) {
      _swift_bridgeObjectRelease(lVar10);
      pcVar13 = *(code **)(lVar15 + 8);
    }
    else {
      uVar12 = 0;
      puVar14 = (undefined8 *)(lVar10 + 0x28);
      param_1 = lVar10;
      local_c0 = lVar11;
      local_b8 = lVar9;
      local_b0 = lVar15;
      local_a8 = lVar4;
      local_a0 = lVar10;
      do {
        uVar5 = 0;
        if (*(ulong *)(param_1 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100114bc4);
          (*pcVar13)();
        }
        uVar1 = puVar14[-1];
        uVar2 = *puVar14;
        _swift_bridgeObjectRetain(uVar2);
        __sSS9hasSuffixySbSSF(0x736e63692e,0xe500000000000000,uVar1,uVar2);
        if ((uVar5 & 1) == 0) {
          uVar5 = 0;
          __sSS9hasSuffixySbSSF(0x676e702e,0xe400000000000000,uVar1,uVar2);
          lVar10 = local_b8;
          if ((uVar5 & 1) == 0) {
            local_70 = uVar1;
            uStack_68 = uVar2;
            _swift_bridgeObjectRetain(uVar2);
            __sSS6appendyySSF(0x736e63692e,0xe500000000000000);
            uVar3 = uStack_68;
            __s10Foundation3URLV22appendingPathComponentyACSSF(local_90,local_70,uStack_68);
            _swift_bridgeObjectRelease(uVar3);
            pcVar8 = "defaultManager";
            IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager")
            ;
            IVar7 = IVar6;
            __s10Foundation3URLV4pathSSvg();
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
            _swift_bridgeObjectRelease(pcVar8);
            pcVar8 = "fileExistsAtPath:";
            IVar7 = NSFileManager::fileExistsAtPath_(IVar6,"fileExistsAtPath:",IVar7);
            if ((int)IVar7 == 0) {
              local_70 = uVar1;
              uStack_68 = uVar2;
              _swift_bridgeObjectRetain(uVar2);
              __sSS6appendyySSF(0x676e702e783240,0xe700000000000000);
              uVar3 = uStack_68;
              __s10Foundation3URLV22appendingPathComponentyACSSF(local_98,local_70,uStack_68);
              _swift_bridgeObjectRelease(uVar3);
              pcVar8 = "defaultManager";
              IVar6 = NSFileManager::defaultManager
                                ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
              IVar7 = IVar6;
              __s10Foundation3URLV4pathSSvg();
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
              _swift_bridgeObjectRelease(pcVar8);
              pcVar8 = "fileExistsAtPath:";
              IVar7 = NSFileManager::fileExistsAtPath_(IVar6,"fileExistsAtPath:",IVar7);
              if ((int)IVar7 == 0) {
                local_70 = uVar1;
                uStack_68 = uVar2;
                __sSS6appendyySSF(0x676e702e783340,0xe700000000000000);
                uVar1 = uStack_68;
                lVar10 = local_c0;
                __s10Foundation3URLV22appendingPathComponentyACSSF(local_c0,local_70,uStack_68);
                _swift_bridgeObjectRelease(uVar1);
                pcVar8 = "defaultManager";
                IVar6 = NSFileManager::defaultManager
                                  ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
                IVar7 = IVar6;
                __s10Foundation3URLV4pathSSvg();
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
                _swift_bridgeObjectRelease(pcVar8);
                pcVar8 = "fileExistsAtPath:";
                IVar7 = NSFileManager::fileExistsAtPath_(IVar6,"fileExistsAtPath:",IVar7);
                lVar4 = local_a8;
                lVar15 = local_b0;
                if ((int)IVar7 == 0) {
                  pcVar13 = *(code **)(local_b0 + 8);
                  (*pcVar13)(lVar10,local_a8);
                  (*pcVar13)(local_98,lVar4);
                  lVar10 = local_90;
                  goto LAB_100114654;
                }
                param_1 = local_a0;
                _swift_bridgeObjectRelease(local_a0);
                __s10Foundation3URLV4pathSSvg();
                pcVar13 = *(code **)(local_b0 + 8);
                (*pcVar13)(lVar10,lVar4);
                (*pcVar13)(local_98,lVar4);
                lVar10 = local_90;
                goto LAB_100114ba0;
              }
              _swift_bridgeObjectRelease(uVar2);
              param_1 = local_a0;
              _swift_bridgeObjectRelease(local_a0);
              lVar15 = local_98;
              __s10Foundation3URLV4pathSSvg();
              lVar4 = local_a8;
              pcVar13 = *(code **)(local_b0 + 8);
              (*pcVar13)(lVar15,local_a8);
              lVar15 = local_90;
            }
            else {
              _swift_bridgeObjectRelease(uVar2);
              param_1 = local_a0;
              _swift_bridgeObjectRelease(local_a0);
              lVar15 = local_90;
              __s10Foundation3URLV4pathSSvg();
              pcVar13 = *(code **)(local_b0 + 8);
              lVar4 = local_a8;
            }
            (*pcVar13)(lVar15,lVar4);
            goto LAB_100114bb0;
          }
          __s10Foundation3URLV22appendingPathComponentyACSSF(local_b8,uVar1,uVar2);
          _swift_bridgeObjectRelease(uVar2);
          pcVar8 = "defaultManager";
          IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
          IVar7 = IVar6;
          __s10Foundation3URLV4pathSSvg();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pcVar8);
          pcVar8 = "fileExistsAtPath:";
          IVar7 = NSFileManager::fileExistsAtPath_(IVar6,"fileExistsAtPath:",IVar7);
          if ((int)IVar7 != 0) {
            param_1 = local_a0;
            _swift_bridgeObjectRelease(local_a0);
            __s10Foundation3URLV4pathSSvg();
            pcVar13 = *(code **)(lVar15 + 8);
            goto LAB_100114ba0;
          }
          pcVar13 = *(code **)(lVar15 + 8);
LAB_100114654:
          (*pcVar13)(lVar10,lVar4);
          param_1 = local_a0;
        }
        else {
          __s10Foundation3URLV22appendingPathComponentyACSSF(local_80,uVar1,uVar2);
          _swift_bridgeObjectRelease(uVar2);
          pcVar8 = "defaultManager";
          IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
          IVar7 = IVar6;
          __s10Foundation3URLV4pathSSvg();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pcVar8);
          pcVar8 = "fileExistsAtPath:";
          IVar7 = NSFileManager::fileExistsAtPath_(IVar6,"fileExistsAtPath:",IVar7);
          if ((int)IVar7 != 0) {
            _swift_bridgeObjectRelease(param_1);
            lVar10 = local_80;
            __s10Foundation3URLV4pathSSvg();
            pcVar13 = *(code **)(lVar15 + 8);
LAB_100114ba0:
            (*pcVar13)(lVar10,lVar4);
LAB_100114bb0:
            (*pcVar13)(local_78,lVar4);
            goto LAB_100114a6c;
          }
          pcVar13 = *(code **)(lVar15 + 8);
          (*pcVar13)(local_80,lVar4);
        }
        uVar12 = uVar12 + 1;
        puVar14 = puVar14 + 2;
      } while (local_88 != uVar12);
      _swift_bridgeObjectRelease(param_1);
    }
    (*pcVar13)(local_78,lVar4);
  }
  param_1 = 0;
LAB_100114a68:
  pcVar8 = (char *)0x0;
LAB_100114a6c:
  auVar16._8_8_ = pcVar8;
  auVar16._0_8_ = param_1;
  return auVar16;
}

