// rea decompile_all
// name: FUN_1001c16b8
// address: 0x1001c16b8
// body: available
// range: 0x1001c16b8-0x1001c1be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001c16b8(double param_1,double param_2,undefined8 param_3,double param_4,uint param_5,
                  long param_6)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ID self;
  undefined1 *puVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined1 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double *local_170;
  undefined4 *local_168;
  uint local_15c;
  long local_158;
  double *local_150;
  undefined4 local_148;
  undefined4 local_144;
  long local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined4 local_116;
  undefined2 local_112;
  undefined1 local_110;
  bool local_10f;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined1 local_108;
  undefined1 local_100 [8];
  long local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  double local_d0;
  undefined1 local_c8 [8];
  double local_c0;
  double dStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined3 local_a7;
  undefined1 uStack_a4;
  undefined3 uStack_a3;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined4 local_96;
  undefined2 local_92;
  double local_90;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  local_128 = *(long *)(lVar4 + -8);
  local_130 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_128 + 0x40));
  lVar9 = (long)&local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_6 + 0x10);
  if (lVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    local_150 = (double *)
                (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
    local_170 = (double *)
                (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
    local_158 = _TtC14UURemoteServer12InputHandler::mouseStates;
    local_138 = _TtC14UURemoteServer12InputHandler::controller;
    local_140 = _TtC14UURemoteServer12InputHandler::keyCodeStates;
    local_144 = 1;
    local_15c = (param_5 ^ 0xffffffff) & 1;
    local_168 = (undefined4 *)((ulong)local_c8 | 1);
    bVar2 = (param_5 & 1) == 0;
    if (bVar2) {
      local_144 = 2;
    }
    local_148 = 3;
    if (bVar2) {
      local_148 = 4;
    }
    plVar10 = (long *)(param_6 + 0x30);
    do {
      uVar6 = plVar10[-2];
      lVar1 = plVar10[-1];
      lVar8 = *plVar10;
      dVar15 = param_1;
      if ((uVar6 == 0x6472616f6279656b && lVar1 == -0x1800000000000000) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar6,lVar1,0x6472616f6279656b,0xe800000000000000,0), dVar15 = param_1,
         (uVar6 & 1) != 0)) {
        _swift_bridgeObjectRetain(lVar1);
        __s10Foundation4DateVACycfC(lVar9);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        param_1 = dVar15;
        _swift_bridgeObjectRelease(lVar1);
        (**(code **)(local_128 + 8))(lVar9,local_130);
        local_100[0] = (undefined1)local_144;
        local_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = (undefined1)local_148;
        uVar7 = *(undefined8 *)(unaff_x20 + local_140);
        local_10f = (param_5 & 1) != 0;
        local_120 = lVar8;
        local_f8 = lVar8;
        local_d0 = dVar15;
        _swift_retain(uVar7);
        FUN_1003be2ac(&local_10f,&local_120);
        _swift_release(uVar7);
        puVar5 = local_100;
        FUN_1001196ac(puVar5);
        uVar3 = (uint)puVar5;
      }
      else {
        if (((ulong)local_150[1] & 1) == 0) {
          dVar15 = *local_150;
          _swift_bridgeObjectRetain(lVar1);
          __s10Foundation4DateVACycfC(lVar9);
          __s10Foundation4DateV21timeIntervalSince1970Sdvg();
          (**(code **)(local_128 + 8))(lVar9,local_130);
          dVar15 = param_1 - dVar15;
          dVar14 = dVar15;
          dVar16 = param_2;
          dVar13 = param_4;
          if (0.05 <= dVar15) goto LAB_1001c1978;
          dVar14 = *local_170;
          dVar16 = local_170[1];
LAB_1001c1a10:
          _swift_bridgeObjectRelease(lVar1);
          if (lVar8 != 1) goto LAB_1001c19ec;
LAB_1001c1a20:
          uVar12 = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar1);
          dVar14 = param_1;
          dVar16 = param_2;
          dVar13 = param_4;
LAB_1001c1978:
          if (DAT_100a73b60 != -1) {
            _swift_once(&DAT_100a73b60,FUN_1000efc4c);
          }
          NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
          self = 0;
          dVar15 = dVar14;
          param_2 = dVar16;
          FUN_1000f6060();
          thunk_FUN_1003d7218();
          param_4 = dVar13;
          if (self == 0) goto LAB_1001c1a10;
          _objc_msgSend(self,"frame");
          param_4 = dVar13;
          _swift_bridgeObjectRelease(lVar1);
          dVar16 = dVar13 - dVar16;
          if (lVar8 == 1) goto LAB_1001c1a20;
LAB_1001c19ec:
          uVar6 = lVar8 - 2U >> 1 | lVar8 << 0x3f;
          if ((long)uVar6 < 3) {
            if (uVar6 == 0) {
              uVar12 = 1;
            }
            else if (uVar6 == 1) {
              uVar12 = 2;
            }
            else {
LAB_1001c1b84:
              uVar12 = 5;
            }
          }
          else if (uVar6 == 3) {
            uVar12 = 3;
          }
          else {
            if (uVar6 != 7) goto LAB_1001c1b84;
            uVar12 = 4;
          }
        }
        local_110 = 1;
        local_108 = local_110;
        __s10Foundation4DateVACycfC(lVar9);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        param_1 = dVar15;
        (**(code **)(local_128 + 8))(lVar9,local_130);
        local_c8[0] = (undefined1)local_15c;
        *local_168 = (undefined4)local_120;
        *(undefined4 *)((long)local_168 + 3) = local_120._3_4_;
        local_b0 = 0;
        local_a8 = local_108;
        _local_a7 = CONCAT13((char)uStack_10c,CONCAT21(uStack_10e,local_10f));
        uStack_a3 = (undefined3)((uint)uStack_10c >> 8);
        local_a0 = 0;
        local_98 = local_110;
        local_96 = local_116;
        local_92 = local_112;
        uVar7 = *(undefined8 *)(unaff_x20 + local_158);
        local_c0 = dVar14;
        dStack_b8 = dVar16;
        local_97 = uVar12;
        local_90 = dVar15;
        if ((param_5 & 1) == 0) {
          local_10f = false;
          local_120 = lVar8;
          _swift_retain(uVar7);
          FUN_1003be2ac(&local_10f,&local_120);
          _swift_release(uVar7);
          uVar7 = 4;
        }
        else {
          local_10f = true;
          local_120 = lVar8;
          _swift_retain(uVar7);
          FUN_1003be2ac(&local_10f,&local_120);
          _swift_release(uVar7);
          uVar7 = 3;
        }
        puVar5 = local_c8;
        FUN_10011878c(puVar5,uVar7);
        uVar3 = (uint)puVar5;
      }
      plVar10 = plVar10 + 3;
      uVar11 = uVar3 | uVar11;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return uVar11 & 1;
}

