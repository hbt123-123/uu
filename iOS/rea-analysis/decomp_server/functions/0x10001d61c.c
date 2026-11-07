// rea decompile_all
// name: FUN_10001d61c
// address: 0x10001d61c
// body: available
// range: 0x10001d61c-0x10001dc47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001d61c(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  long *param_6,byte param_7,int param_8,ID param_9,long param_10)

{
  long lVar1;
  char **ppcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ID IVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_420 [16];
  byte local_410;
  int local_40c;
  long *local_408;
  undefined1 *local_400;
  long lStack_3f8;
  long local_3f0;
  ID IStack_3e8;
  long local_3e0;
  char *local_3d0;
  long lStack_3c8;
  undefined8 local_3b8;
  undefined1 *local_3b0;
  int local_3a4;
  undefined8 local_3a0;
  undefined1 auStack_398 [152];
  long local_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long local_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long local_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long local_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long local_280;
  long lStack_278;
  long local_270;
  long local_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long local_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long local_1d0;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  undefined1 auStack_88 [40];
  
  local_120 = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_1);
  FUN_10005f56c();
  lVar1 = local_120;
  _swift_beginAccess(param_3 + 0x10,auStack_88,0,0);
  plVar3 = (long *)(param_3 + 0x10);
  _swift_weakLoadStrong();
  if (plVar3 == (long *)0x0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(lVar1);
    }
    goto LAB_10001d930;
  }
  local_3a4 = param_8;
  local_3a0 = param_5;
  if (((*(byte *)(plVar3[7] + 0x14) & 1) == 0) ||
     (plVar4 = plVar3, FUN_100039b50(), ppcVar2 = &local_3d0, ((ulong)plVar4 & 1) != 0)) {
    lStack_b8 = param_6[0xd];
    local_c0 = param_6[0xc];
    lStack_148 = param_6[0xf];
    lStack_150 = param_6[0xe];
    lStack_c8 = param_6[0xb];
    lStack_d0 = param_6[10];
    lStack_158 = param_6[0xd];
    local_160 = param_6[0xc];
    lStack_a8 = param_6[0xf];
    lStack_b0 = param_6[0xe];
    lStack_138 = param_6[0x11];
    local_140 = param_6[0x10];
    lStack_f8 = param_6[5];
    local_100 = param_6[4];
    lStack_188 = param_6[7];
    lStack_190 = param_6[6];
    lStack_108 = param_6[3];
    lStack_110 = param_6[2];
    lStack_198 = param_6[5];
    local_1a0 = param_6[4];
    lStack_e8 = param_6[7];
    lStack_f0 = param_6[6];
    lStack_178 = param_6[9];
    local_180 = param_6[8];
    lStack_d8 = param_6[9];
    local_e0 = param_6[8];
    lStack_168 = param_6[0xb];
    lStack_170 = param_6[10];
    lStack_1b8 = param_6[1];
    local_1c0 = *param_6;
    lStack_1a8 = param_6[3];
    lStack_1b0 = param_6[2];
    lStack_118 = param_6[1];
    local_120 = *param_6;
    lStack_98 = param_6[0x11];
    local_a0 = param_6[0x10];
    local_130 = param_6[0x12];
    local_90 = param_6[0x12];
    plVar4 = &local_120;
    FUN_100040934();
    ppcVar2 = &local_3d0;
    if ((int)plVar4 != 1) {
      lStack_1f8 = lStack_b8;
      local_200 = local_c0;
      lStack_1e8 = lStack_a8;
      lStack_1f0 = lStack_b0;
      lStack_1d8 = lStack_98;
      local_1e0 = local_a0;
      local_1d0 = local_90;
      lStack_238 = lStack_f8;
      local_240 = local_100;
      lStack_228 = lStack_e8;
      lStack_230 = lStack_f0;
      lStack_218 = lStack_d8;
      local_220 = local_e0;
      lStack_208 = lStack_c8;
      lStack_210 = lStack_d0;
      lStack_258 = lStack_118;
      local_260 = local_120;
      lStack_248 = lStack_108;
      lStack_250 = lStack_110;
      plVar4 = &local_260;
      FUN_100040948();
      ppcVar2 = &local_3d0;
      if ((int)plVar4 == 0) {
        plVar4 = &local_260;
        FUN_100040964();
        lStack_3c8 = plVar4[1];
        local_3d0 = (char *)*plVar4;
        lVar11 = plVar4[2];
        uVar5 = 0;
        FUN_100401b14();
        local_3b8 = uVar5;
        local_3b0 = (undefined1 *)&local_3d0;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_410 = param_7 & 1;
        local_40c = local_3a4;
        lStack_3f8 = lStack_3c8;
        local_400 = local_3d0;
        IStack_3e8 = param_9;
        local_3e0 = lVar1;
        local_3d0 = "reenInfo refresh reason:";
        lStack_298 = lStack_158;
        local_2a0 = local_160;
        lStack_288 = lStack_148;
        lStack_290 = lStack_150;
        lStack_278 = lStack_138;
        local_280 = local_140;
        local_270 = local_130;
        lStack_2d8 = lStack_198;
        local_2e0 = local_1a0;
        lStack_2c8 = lStack_188;
        lStack_2d0 = lStack_190;
        lStack_2b8 = lStack_178;
        local_2c0 = local_180;
        lStack_2a8 = lStack_168;
        lStack_2b0 = lStack_170;
        lStack_2f8 = lStack_1b8;
        local_300 = local_1c0;
        lStack_2e8 = lStack_1a8;
        lStack_2f0 = lStack_1b0;
        local_408 = param_6;
        local_3f0 = lVar11;
        FUN_10004098c(&local_300,auStack_398);
        FUN_1003fb45c(thunk_FUN_100040b9c,auStack_420,0xd0000000000000a9,0x8000000100877660,
                      0xd00000000000007a,(ulong)local_3d0 | 0x8000000000000000,0x2c4,0);
        plVar4 = &local_1c0;
        FUN_100040bb4(plVar4,&DAT_100a75b90,&DAT_100809c10);
        ppcVar2 = (char **)local_3b0;
      }
    }
  }
  if ((param_7 & 1) != 0) {
    if (*(long *)(lVar1 + 0x10) == 0) {
      if (*(char *)(plVar3[7] + 0x14) == '\x01') {
        FUN_100039b50();
        if (((ulong)plVar4 & 1) == 0) goto LAB_10001d898;
        iVar9 = -1;
      }
      else {
        iVar9 = *(int *)(plVar3[7] + 0x10);
      }
      IVar6 = _objc_msgSend(param_9,"screenId");
      if ((((iVar9 == (int)IVar6) && (plVar3[0x21] == param_10)) &&
          (lVar11 = *(long *)(*(long *)(plVar3[3] + 0x10) +
                             _TtC14UURemoteServer15StreamerManager::dispatcher), lVar11 != 0)) &&
         ((lVar11 = *(long *)(lVar11 + _TtC14UURemoteServer18StreamerDispatcher::
                                       currentConnectSession), lVar11 != 0 &&
          (*(int *)(lVar11 + _TtC14UURemoteServer22StreamerConnectSession::handle) == local_3a4))))
      {
        lStack_b8 = param_6[0xd];
        local_c0 = param_6[0xc];
        lStack_148 = param_6[0xf];
        lStack_150 = param_6[0xe];
        lStack_c8 = param_6[0xb];
        lStack_d0 = param_6[10];
        lStack_158 = param_6[0xd];
        local_160 = param_6[0xc];
        lStack_a8 = param_6[0xf];
        lStack_b0 = param_6[0xe];
        lStack_138 = param_6[0x11];
        local_140 = param_6[0x10];
        lStack_f8 = param_6[5];
        local_100 = param_6[4];
        lStack_188 = param_6[7];
        lStack_190 = param_6[6];
        lStack_108 = param_6[3];
        lStack_110 = param_6[2];
        lStack_198 = param_6[5];
        local_1a0 = param_6[4];
        lStack_e8 = param_6[7];
        lStack_f0 = param_6[6];
        lStack_178 = param_6[9];
        local_180 = param_6[8];
        lStack_d8 = param_6[9];
        local_e0 = param_6[8];
        lStack_168 = param_6[0xb];
        lStack_170 = param_6[10];
        lStack_1b8 = param_6[1];
        local_1c0 = *param_6;
        lStack_1a8 = param_6[3];
        lStack_1b0 = param_6[2];
        lStack_118 = param_6[1];
        local_120 = *param_6;
        lStack_98 = param_6[0x11];
        local_a0 = param_6[0x10];
        local_130 = param_6[0x12];
        local_90 = param_6[0x12];
        iVar9 = (int)&local_120;
        FUN_100040934();
        iVar13 = local_3a4;
        if (iVar9 != 1) {
          lStack_1f8 = lStack_b8;
          local_200 = local_c0;
          lStack_1e8 = lStack_a8;
          lStack_1f0 = lStack_b0;
          lStack_1d8 = lStack_98;
          local_1e0 = local_a0;
          local_1d0 = local_90;
          lStack_238 = lStack_f8;
          local_240 = local_100;
          lStack_228 = lStack_e8;
          lStack_230 = lStack_f0;
          lStack_218 = lStack_d8;
          local_220 = local_e0;
          lStack_208 = lStack_c8;
          lStack_210 = lStack_d0;
          lStack_258 = lStack_118;
          local_260 = local_120;
          lStack_248 = lStack_108;
          lStack_250 = lStack_110;
          iVar9 = (int)&local_260;
          FUN_100040948();
          if (iVar9 == 0) {
            plVar4 = &local_260;
            FUN_100040964();
            lVar11 = *plVar4;
            uVar8 = plVar4[1];
            lVar14 = plVar4[2];
            lVar12 = lVar11;
            uVar7 = uVar8;
            FUN_100434128(lVar11,uVar8,lVar14);
            if (((uVar7 & 1) == 0) || (lVar12 == 0)) {
              uVar5 = 0;
              FUN_100401b14();
              local_3b8 = uVar5;
              local_3b0 = (undefined1 *)ppcVar2;
              (*(code *)PTR____chkstk_darwin_100995498)();
              local_3d0 = (char *)((long)ppcVar2 + -0x30);
              *(long **)((long)ppcVar2 + -0x20) = param_6;
              *(long *)((long)ppcVar2 + -0x18) = lVar11;
              *(ulong *)((long)ppcVar2 + -0x10) = uVar8;
              *(long *)((long)ppcVar2 + -8) = lVar14;
              lStack_298 = lStack_158;
              local_2a0 = local_160;
              lStack_288 = lStack_148;
              lStack_290 = lStack_150;
              lStack_278 = lStack_138;
              local_280 = local_140;
              local_270 = local_130;
              lStack_2d8 = lStack_198;
              local_2e0 = local_1a0;
              lStack_2c8 = lStack_188;
              lStack_2d0 = lStack_190;
              lStack_2b8 = lStack_178;
              local_2c0 = local_180;
              lStack_2a8 = lStack_168;
              lStack_2b0 = lStack_170;
              lStack_2f8 = lStack_1b8;
              local_300 = local_1c0;
              lStack_2e8 = lStack_1a8;
              lStack_2f0 = lStack_1b0;
              FUN_10004098c(&local_300,auStack_398);
              FUN_1003fb4bc(thunk_FUN_100040980,local_3d0,0xd0000000000000a9,0x8000000100877660,
                            0xd00000000000007a,0x800000010087be50,0x2d5,0);
              FUN_100040bb4(&local_1c0,&DAT_100a75b90,&DAT_100809c10);
              iVar13 = local_3a4;
            }
            else {
              lVar12 = plVar3[7];
              FUN_100434128(lVar11,uVar8,lVar14);
              iVar13 = local_3a4;
              if ((uVar8 & 1) == 0) {
                uVar10 = 0x3c;
              }
              else {
                uVar10 = *(undefined4 *)(&DAT_100809f74 + lVar11 * 4);
              }
              FUN_1000409c8(&local_1c0,&local_300);
              _swift_retain(lVar12);
              FUN_100083500(uVar10,iVar13);
              FUN_100040bb4(&local_1c0,&DAT_100a75b90,&DAT_100809c10);
              _swift_release(lVar12);
            }
          }
        }
        lVar11 = plVar3[7];
        _swift_retain(lVar11);
        FUN_1000837f8(iVar13,0);
        _swift_release(lVar11);
      }
    }
LAB_10001d898:
    if ((((plVar3[0x21] == param_10) &&
         (lVar11 = *(long *)(*(long *)(plVar3[3] + 0x10) +
                            _TtC14UURemoteServer15StreamerManager::dispatcher), lVar11 != 0)) &&
        (lVar11 = *(long *)(lVar11 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession
                           ), lVar11 != 0)) &&
       (*(int *)(lVar11 + _TtC14UURemoteServer22StreamerConnectSession::handle) == local_3a4)) {
      FUN_10001e180(local_3a4,param_6,lVar1);
    }
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(lVar1);
  }
  _swift_release(plVar3);
LAB_10001d930:
  _swift_bridgeObjectRelease(lVar1);
  return;
}

