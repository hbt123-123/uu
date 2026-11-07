// rea decompile_all
// name: FUN_100088180
// address: 0x100088180
// body: available
// range: 0x100088180-0x100088a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100088180(undefined8 *******param_1,long param_2,long param_3,undefined8 param_4,
                  long param_5,code *param_6,undefined4 param_7,long param_8,long param_9)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 ******ppppppuVar16;
  code *pcVar17;
  long unaff_x21;
  code *pcVar18;
  undefined8 *******pppppppuVar19;
  long lVar20;
  long alStack_1f0 [2];
  long local_1e0;
  code *local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long *local_188;
  undefined8 ******local_180;
  long local_178;
  undefined8 local_170;
  ulong local_168;
  long local_160;
  undefined8 *****apppppuStack_158 [3];
  long local_140;
  undefined8 ******local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  undefined1 local_f8;
  undefined8 ******local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_168 = CONCAT44(local_168._4_4_,param_7);
  lVar12 = *(long *)(param_8 + -8);
  lVar13 = (long)&local_1e0 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xff;
  local_1c8 = lVar13;
  local_160 = param_5;
  __sSqMa(0xff,param_8);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar3,lVar3,0,0);
  local_1b8 = *(long *)(lVar4 + -8);
  local_1b0 = lVar13 - (*(long *)(local_1b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_190 = *(long *)(lVar3 + -8);
  uVar14 = *(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1c0 = local_1b0 - uVar14;
  local_1a0 = local_1c0 - uVar14;
  plVar15 = (long *)(local_1a0 - uVar14);
  lStack_98 = *(long *)(param_6 + 8);
  local_a0 = *(undefined8 *)param_6;
  uStack_88 = *(undefined8 *)(param_6 + 0x18);
  uStack_90 = *(undefined8 *)(param_6 + 0x10);
  local_80 = *(undefined8 *)(param_6 + 0x20);
  local_1a8 = lVar3;
  local_198 = lVar4;
  local_188 = plVar15;
  FUN_1000997ac(&local_138,param_1,param_2,param_3);
  lVar3 = lStack_100;
  if (lStack_130 == 0) {
    FUN_10001fc18(&local_138,&DAT_100104818,&DAT_1000d62d0);
LAB_1000884d4:
    lStack_120 = param_8;
    FUN_100060d88(&local_138);
    (**(code **)(lVar12 + 0x10))();
    FUN_1000866dc(&local_138,&lStack_d8);
    local_b8 = local_160;
    local_b0 = 1;
    local_f0 = param_1;
    lStack_e8 = param_2;
    local_e0 = param_3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    FUN_100099afc(&local_f0);
    FUN_100065194(&local_f0);
    puVar7 = &DAT_100104198;
    puVar11 = &DAT_1000d5180;
  }
  else {
    lStack_c8 = lStack_110;
    local_d0 = local_118;
    local_b8 = lStack_100;
    lStack_c0 = local_108;
    local_b0 = local_f8;
    lStack_e8 = lStack_130;
    local_f0 = local_138;
    lStack_d8 = lStack_120;
    local_e0 = local_128;
    pppppppuVar19 = *(undefined8 ********)(lStack_100 + 0x10);
    pppppppuVar5 = (undefined8 *******)PTR___swiftEmptyArrayStorage_1000f0740;
    local_180 = param_1;
    local_178 = param_8;
    local_170 = param_4;
    if (pppppppuVar19 != (undefined8 *******)0x0) {
      pppppppuVar5 = pppppppuVar19;
      local_1e0 = param_3;
      local_1d8 = param_6;
      local_1d0 = param_2;
      FUN_100079728(pppppppuVar19,0);
      pppppppuVar6 = &local_138;
      FUN_10008e0d4(pppppppuVar6,pppppppuVar5 + 4,pppppppuVar19,lVar3);
      lVar9 = local_118;
      lVar10 = lStack_120;
      lVar13 = local_128;
      lVar4 = lStack_130;
      _swift_bridgeObjectRetain(lVar3);
      FUN_10008f124(local_138,lVar4,lVar13,lVar10,lVar9);
      param_2 = local_1d0;
      param_3 = local_1e0;
      if (pppppppuVar6 != pppppppuVar19) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100088a14);
        (*pcVar17)();
      }
    }
    local_138 = pppppppuVar5;
    _swift_retain(pppppppuVar5);
    FUN_1000afe18(&local_138);
    uVar2 = local_170;
    param_1 = (undefined8 *******)local_180;
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      _swift_release(local_138);
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100088a2c);
      (*pcVar17)();
    }
    _swift_release(pppppppuVar5);
    ppppppuVar16 = (undefined8 ******)local_138[2];
    _swift_release();
    FUN_100065194(&local_f0);
    param_8 = local_178;
    if (ppppppuVar16 == (undefined8 ******)0x0) goto LAB_1000884d4;
    if ((local_168 & 0xff) != 0) {
      if (((uint)local_168 & 0xff) == 1) {
        plVar15[-2] = local_178;
        plVar15[-1] = param_9;
        FUN_100099884(param_1,param_2,param_3,local_160,uVar2,FUN_1000045b0);
        return;
      }
      goto LAB_1000884d4;
    }
    FUN_1000997ac(&local_138,param_1,param_2,param_3);
    lVar3 = local_178;
    if (lStack_130 != 0) {
      local_1e0 = param_9;
      lStack_c8 = lStack_110;
      local_d0 = local_118;
      local_b8 = lStack_100;
      lStack_c0 = local_108;
      local_b0 = local_f8;
      lStack_e8 = lStack_130;
      local_f0 = local_138;
      lStack_d8 = lStack_120;
      local_e0 = local_128;
      local_1d0 = param_2;
      FUN_1000866dc(&lStack_d8,&local_138);
      puVar7 = &DAT_100104198;
      FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
      plVar15 = local_188;
      plVar8 = local_188;
      _swift_dynamicCast(local_188,&local_138,puVar7,lVar3,6);
      pcVar17 = *(code **)(lVar12 + 0x38);
      (*pcVar17)(plVar15,(uint)plVar8 ^ 1,1,lVar3);
      lVar10 = local_1a0;
      local_1d8 = *(code **)(lVar12 + 0x10);
      (*local_1d8)(local_1a0,local_170,lVar3);
      (*pcVar17)(lVar10,0,1,lVar3);
      lVar13 = local_1a8;
      lVar4 = local_1b0;
      iVar1 = *(int *)(local_198 + 0x30);
      pcVar17 = *(code **)(local_190 + 0x10);
      (*pcVar17)(local_1b0,plVar15,local_1a8);
      local_168 = (long)iVar1;
      (*pcVar17)(lVar4 + iVar1,lVar10,lVar13);
      pcVar18 = *(code **)(lVar12 + 0x30);
      lVar9 = lVar4;
      (*pcVar18)(lVar4,1,lVar3);
      lVar3 = local_1c0;
      if ((int)lVar9 == 1) {
        pcVar17 = *(code **)(local_190 + 8);
        (*pcVar17)(lVar10,lVar13);
        lVar20 = local_178;
        lVar3 = lVar4 + local_168;
        (*pcVar18)(lVar3,1,local_178);
        if ((int)lVar3 != 1) {
LAB_1000887e8:
          (**(code **)(local_1b8 + 8))(lVar4,local_198);
          plVar15 = local_188;
          (*pcVar17)(local_188,lVar13);
LAB_100088814:
          lVar12 = lStack_98;
          lVar4 = local_b8;
          FUN_100054664();
          _swift_allocError(&DAT_1000fa8c8,plVar15,0,0);
          lVar3 = local_160;
          *plVar15 = lVar4;
          plVar15[1] = local_160;
          plVar15[2] = lVar12;
          plVar15[6] = lStack_120;
          plVar15[5] = local_128;
          plVar15[4] = lStack_130;
          plVar15[3] = (long)local_138;
          plVar15[8] = lStack_110;
          plVar15[7] = local_118;
          plVar15[9] = local_108;
          *(undefined1 *)(plVar15 + 10) = 0xb;
          _swift_willThrow();
          _swift_bridgeObjectRetain(lVar4);
          _swift_bridgeObjectRetain(lVar3);
          _swift_bridgeObjectRetain(lVar12);
          FUN_100065194(&local_f0);
          return;
        }
        (*pcVar17)(lVar4,lVar13);
        (*pcVar17)(local_188,lVar13);
      }
      else {
        (*pcVar17)(local_1c0,lVar4,lVar13);
        uVar14 = local_168;
        lVar20 = local_178;
        lVar10 = lVar4 + local_168;
        (*pcVar18)(lVar10,1,local_178);
        lVar9 = local_1c8;
        if ((int)lVar10 == 1) {
          pcVar17 = *(code **)(local_190 + 8);
          (*pcVar17)(local_1a0,lVar13);
          (**(code **)(lVar12 + 8))(lVar3,lVar20);
          goto LAB_1000887e8;
        }
        (**(code **)(lVar12 + 0x20))(local_1c8,lVar4 + uVar14,lVar20);
        lVar10 = lVar3;
        __sSQ2eeoiySbx_xtFZTj(lVar3,lVar9,lVar20,local_1e0);
        local_168 = CONCAT44(local_168._4_4_,(int)lVar10);
        pcVar17 = *(code **)(lVar12 + 8);
        (*pcVar17)(lVar9,lVar20);
        pcVar18 = *(code **)(local_190 + 8);
        (*pcVar18)(local_1a0,lVar13);
        (*pcVar17)(lVar3,lVar20);
        (*pcVar18)(lVar4,lVar13);
        plVar15 = local_188;
        (*pcVar18)(local_188,lVar13);
        if ((local_168 & 1) == 0) goto LAB_100088814;
      }
      local_140 = lVar20;
      FUN_100060d88(apppppuStack_158);
      (*local_1d8)();
      FUN_1000866dc(apppppuStack_158,&lStack_120);
      lVar3 = local_1d0;
      local_138 = local_180;
      lStack_130 = local_1d0;
      lStack_100 = local_160;
      local_f8 = 1;
      local_128 = param_3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar3);
      _swift_bridgeObjectRetain(param_3);
      FUN_100099afc(&local_138);
      FUN_100065194(&local_138);
      FUN_100065194(&local_f0);
      puVar7 = &DAT_100104198;
      puVar11 = &DAT_1000d5180;
      pppppppuVar5 = (undefined8 *******)apppppuStack_158;
      goto LAB_100088560;
    }
    puVar7 = &DAT_100104818;
    puVar11 = &DAT_1000d62d0;
  }
  pppppppuVar5 = &local_138;
LAB_100088560:
  FUN_10001fc18(pppppppuVar5,puVar7,puVar11);
  return;
}

