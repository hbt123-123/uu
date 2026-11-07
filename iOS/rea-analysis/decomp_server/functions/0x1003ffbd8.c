// rea decompile_all
// name: FUN_1003ffbd8
// address: 0x1003ffbd8
// body: available
// range: 0x1003ffbd8-0x10040018f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003ffbd8(code *param_1,code *param_2,code *param_3,code *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  undefined8 extraout_x14;
  ulong extraout_x15;
  long lVar4;
  long lVar5;
  long unaff_x21;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  code *pcVar11;
  code *local_e0;
  long local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  ulong local_b8;
  code *local_b0;
  undefined8 local_a8;
  code *local_a0;
  code *local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_58;
  
  lVar2 = 0;
  local_88 = param_5;
  local_78 = param_3;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = (long)&local_e0 +
          ((-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar10 = lVar4 - extraout_x12_01;
  local_80 = *(long *)(extraout_x13 + 0x48);
  if (local_80 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100400188);
    (*pcVar9)();
  }
  if (((long)param_2 - (long)param_1 == -0x8000000000000000) && (local_80 == -1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10040018c);
    (*pcVar9)();
  }
  if (((long)local_78 - (long)param_2 == -0x8000000000000000) && (local_80 == -1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100400190);
    (*pcVar9)();
  }
  lVar5 = 0;
  if (local_80 != 0) {
    lVar5 = ((long)param_2 - (long)param_1) / local_80;
  }
  lVar8 = 0;
  if (local_80 != 0) {
    lVar8 = ((long)local_78 - (long)param_2) / local_80;
  }
  local_90 = extraout_x13;
  local_68 = param_4;
  local_58 = param_1;
  if (lVar5 < lVar8) {
    lVar8 = lVar5 * local_80;
    if ((param_4 < param_1) || (param_1 + lVar8 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar5,lVar2);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar5,lVar2);
    }
    local_98 = param_4 + lVar8;
    local_70 = local_98;
    pcVar9 = local_58;
    if (0 < lVar8 && param_2 < local_78) {
      local_a0 = *(code **)(local_90 + 0x10);
      local_70 = local_98;
      while( true ) {
        pcVar9 = local_a0;
        (*local_a0)(uVar10,param_2,lVar2);
        (*pcVar9)(lVar4,param_4,lVar2);
        uVar3 = uVar10;
        FUN_1003ff094(uVar10,lVar4,local_88);
        if (unaff_x21 != 0) break;
        pcVar9 = *(code **)(local_90 + 8);
        (*pcVar9)(lVar4,lVar2);
        (*pcVar9)(uVar10,lVar2);
        lVar5 = local_80;
        if ((uVar3 & 1) == 0) {
          pcVar11 = param_4 + local_80;
          pcVar7 = param_2;
          pcVar9 = pcVar11;
          if ((param_1 < param_4) || (pcVar11 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar2);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar2);
          }
        }
        else {
          pcVar7 = param_2 + local_80;
          pcVar11 = param_4;
          if ((param_1 < param_2) || (pcVar7 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar2);
            lVar5 = local_80;
            pcVar9 = local_68;
          }
          else {
            pcVar9 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar2);
              lVar5 = local_80;
              pcVar9 = local_68;
            }
          }
        }
        local_68 = pcVar9;
        param_1 = param_1 + lVar5;
        pcVar9 = param_1;
        if ((local_98 <= pcVar11) ||
           (param_2 = pcVar7, param_4 = pcVar11, pcVar9 = param_1, local_58 = param_1,
           local_78 <= pcVar7)) goto LAB_10040013c;
      }
      pcVar9 = *(code **)(local_90 + 8);
      (*pcVar9)(lVar4,lVar2);
      (*pcVar9)(uVar10,lVar2);
      pcVar9 = local_58;
    }
  }
  else {
    lVar4 = lVar8 * local_80;
    local_b8 = extraout_x15;
    local_a8 = extraout_x14;
    if ((param_4 < param_2) || (param_2 + lVar4 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar8,lVar2);
      lVar5 = local_90;
    }
    else {
      lVar5 = extraout_x13;
      if (param_4 != param_2) {
        _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar8,lVar2);
        lVar5 = extraout_x13;
      }
    }
    local_70 = param_4 + lVar4;
    pcVar9 = param_2;
    if (0 < lVar4) {
      lVar4 = -local_80;
      local_b0 = local_70;
      pcVar7 = local_70;
      local_d8 = lVar4;
      local_d0 = param_4;
      local_c8 = param_1;
      do {
        pcVar11 = param_2 + lVar4;
        local_e0 = local_b0;
        local_c0 = param_2;
        while( true ) {
          pcVar9 = local_78;
          uVar1 = local_a8;
          uVar10 = local_b8;
          if (local_c0 <= param_1) {
            local_70 = local_e0;
            pcVar9 = local_c0;
            goto LAB_10040013c;
          }
          local_a0 = pcVar7 + lVar4;
          pcVar6 = *(code **)(lVar5 + 0x10);
          local_98 = pcVar7;
          local_80 = unaff_x21;
          (*pcVar6)(local_b8,local_a0,lVar2);
          (*pcVar6)(uVar1,pcVar11,lVar2);
          lVar8 = local_80;
          uVar3 = uVar10;
          FUN_1003ff094(uVar10,uVar1,local_88);
          if (lVar8 != 0) {
            pcVar9 = *(code **)(lVar5 + 8);
            (*pcVar9)(uVar1,lVar2);
            (*pcVar9)(uVar10,lVar2);
            local_58 = local_c0;
            local_70 = local_b0;
            pcVar9 = local_58;
            goto LAB_10040013c;
          }
          local_78 = pcVar9 + lVar4;
          pcVar7 = *(code **)(lVar5 + 8);
          local_80 = lVar8;
          (*pcVar7)(uVar1,lVar2);
          (*pcVar7)(uVar10,lVar2);
          lVar5 = local_90;
          pcVar7 = local_a0;
          param_1 = local_c8;
          pcVar6 = local_d0;
          lVar4 = local_d8;
          if ((uVar3 & 1) != 0) break;
          if ((pcVar9 < local_98) || (local_98 <= local_78)) {
            _swift_arrayInitWithTakeFrontToBack(local_78,local_a0,1,lVar2);
            param_1 = local_c8;
            lVar5 = local_90;
          }
          else if (pcVar9 != local_98) {
            _swift_arrayInitWithTakeBackToFront(local_78,local_a0,1,lVar2);
          }
          local_b0 = pcVar7;
          unaff_x21 = local_80;
          lVar4 = local_d8;
          local_70 = pcVar7;
          pcVar9 = local_c0;
          if (pcVar7 <= local_d0) goto LAB_10040013c;
        }
        if ((pcVar9 < local_c0) || (local_c0 <= local_78)) {
          _swift_arrayInitWithTakeFrontToBack(local_78,pcVar11,1,lVar2);
          param_1 = local_c8;
          lVar5 = local_90;
          lVar4 = local_d8;
          pcVar6 = local_d0;
        }
        else if (pcVar9 != local_c0) {
          _swift_arrayInitWithTakeBackToFront(local_78,pcVar11,1,lVar2);
        }
        pcVar7 = local_98;
        unaff_x21 = local_80;
        param_2 = pcVar11;
        local_70 = local_b0;
        pcVar9 = pcVar11;
      } while (pcVar6 < local_98);
    }
  }
LAB_10040013c:
  local_58 = pcVar9;
  FUN_100099ac8(&local_58,&local_68,&local_70,PTR___s10Foundation3URLVMa_100996188);
  _swift_bridgeObjectRelease(local_88);
  return 1;
}

