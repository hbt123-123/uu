// rea decompile_all
// name: FUN_1001f68ac
// address: 0x1001f68ac
// body: available
// range: 0x1001f68ac-0x1001f709f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f705c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001f709c to 0x1007de1a0 __exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f68ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long lVar12;
  undefined1 auStack_130 [16];
  long lStack_120;
  int aiStack_118 [2];
  long lStack_110;
  long alStack_108 [2];
  long lStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  char *local_c8;
  char *local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0;
  local_98 = param_1;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_f0 + lVar1;
  uVar6 = param_3;
  lVar10 = param_4;
  FUN_1000a300c();
  if (lVar10 == 0) {
    local_a0 = param_2;
    if ((((0 < *(int *)(param_5 + 0x1c)) || (-1 < *(int *)(param_5 + 0x18))) ||
        (*(long *)(param_5 + _TtC14UURemoteServer15TerminalSession::readSource) != 0)) ||
       (*(long *)(param_5 + _TtC14UURemoteServer15TerminalSession::processSource) != 0)) {
      FUN_1001ebe04(1,0x1000000000000019,0x80000001008a1130);
    }
    lStack_a8 = param_6;
    if (param_6 < 2) {
      lStack_a8 = 1;
    }
    local_b0 = param_7;
    if (param_7 < 2) {
      local_b0 = 1;
    }
    *(long *)(param_5 + _TtC14UURemoteServer15TerminalSession::cols) = lStack_a8;
    *(long *)(param_5 + _TtC14UURemoteServer15TerminalSession::rows) = local_b0;
    local_80 = 0x2f6e69622f;
    local_78 = 0xe500000000000000;
    uStack_e0 = *(undefined8 *)(param_5 + _TtC14UURemoteServer15TerminalSession::shell);
    local_e8 = ((undefined8 *)(param_5 + _TtC14UURemoteServer15TerminalSession::shell))[1];
    __sSS6appendyySSF();
    uVar6 = local_78;
    uVar5 = param_3;
    local_d8 = param_4;
    FUN_1000aa99c(param_3,param_4);
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = 0;
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)((long)alStack_108 + lVar1 + 8) = uVar5;
    *(long *)((long)&lStack_f8 + lVar1) = param_5;
    local_c8 = "tmuxCreationPending";
    local_c0 = s___PTY___tryReconnect_tmux_reatta_1008a10b0 + 0x20;
    local_d0 = uVar5;
    local_b8 = uVar6;
    FUN_1003fb48c(FUN_1001fa63c,(long)&lStack_110 + lVar1,0xd000000000000095,0x80000001008a00c0,
                  &DAT_d000000000000018,0x80000001008a10d0,0x523,0);
    local_84 = -1;
    if (0xffff < param_7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f7058);
      (*pcVar2)();
    }
    if (0xffff < param_6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f705c);
      (*pcVar2)();
    }
    local_8c = (undefined2)local_b0;
    local_8a = (undefined2)lStack_a8;
    local_88 = 0;
    FUN_1001eaa9c(0);
    uVar7 = (ulong)*(uint *)(param_5 + 0x10);
    FUN_1001e9c28(uVar7,0x7461655278756d74,0xec00000068636174);
    piVar8 = &local_84;
    _forkpty(piVar8,0,0,&local_8c);
    iVar3 = (int)piVar8;
    if (iVar3 < 0) {
      _swift_bridgeObjectRelease(local_d0);
      FUN_1003fb4ec(FUN_1001fa684,param_5,0xd000000000000095,(ulong)local_c8 | 0x8000000000000000,
                    &DAT_d000000000000018,(ulong)local_c0 | 0x8000000000000000,0x530,0);
      *local_98 = 0x1000000000000014;
      local_98[1] = 0x80000001008a1190;
    }
    else {
      if (iVar3 == 0) {
        local_80 = 0x2f6e69622f;
        local_78 = 0xe500000000000000;
        __sSS6appendyySSF(uStack_e0,local_e8);
        FUN_1001f87cc(local_a0,param_3,local_d8,local_80,local_78,uVar7);
                    /* WARNING: Subroutine does not return */
        __exit(0x7f);
      }
      *(int *)(param_5 + 0x18) = local_84;
      *(int *)(param_5 + 0x1c) = iVar3;
      __s10Foundation4DateVACycfC(puVar11);
      lVar10 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
      _swift_beginAccess(param_5 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,&local_80,
                         0x21,0);
      (**(code **)(lVar12 + 0x28))(param_5 + lVar10,puVar11,lVar4);
      _swift_endAccess(&local_80);
      pcVar9 = _ptsname(local_84);
      lVar10 = local_d8;
      if (pcVar9 == (char *)0x0) {
        _swift_bridgeObjectRelease(local_d0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(long *)((long)alStack_108 + lVar1 + 8) = param_5;
        *(int *)((long)&lStack_f8 + lVar1) = iVar3;
        FUN_1003fb4ec(FUN_1001fa644,(long)&lStack_110 + lVar1,0xd000000000000095,
                      (ulong)local_c8 | 0x8000000000000000,&DAT_d000000000000018,
                      (ulong)local_c0 | 0x8000000000000000,0x545,0);
        FUN_1001ebe04(1,0x100000000000001b,0x80000001008a1150);
        *local_98 = 0x100000000000001d;
        local_98[1] = 0x80000001008a1170;
      }
      else {
        __sSS7cStringSSSPys4Int8VG_tcfC();
        uVar6 = param_3;
        lVar4 = lVar10;
        FUN_1000a749c(0x3ff0000000000000,param_3,lVar10,pcVar9,puVar11);
        if (lVar4 == 0) {
          FUN_1000a4a08(param_3,lVar10,pcVar9,puVar11,1);
          if (lVar10 == 0) {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)((long)&lStack_120 + lVar1) = param_5;
            *(int *)((long)aiStack_118 + lVar1) = iVar3;
            *(int **)((long)&lStack_110 + lVar1) = &local_84;
            *(char **)((long)alStack_108 + lVar1) = pcVar9;
            uVar6 = local_d0;
            *(undefined1 **)((long)alStack_108 + lVar1 + 8) = puVar11;
            *(undefined8 *)((long)&lStack_f8 + lVar1) = uVar6;
            FUN_1003fb48c(FUN_1001fa670,auStack_130 + lVar1,0xd000000000000095,
                          (ulong)local_c8 | 0x8000000000000000,&DAT_d000000000000018,
                          (ulong)local_c0 | 0x8000000000000000,0x55d,0);
            _swift_bridgeObjectRelease(uVar6);
            _swift_bridgeObjectRelease(puVar11);
            FUN_1001ea258();
            FUN_1001ea518();
            *local_98 = 0;
            local_98[1] = 0;
          }
          else {
            _swift_bridgeObjectRelease(puVar11);
            _swift_bridgeObjectRelease(local_d0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)((long)&lStack_110 + lVar1) = param_5;
            *(int *)((long)alStack_108 + lVar1) = iVar3;
            *(undefined8 *)((long)alStack_108 + lVar1 + 8) = param_3;
            *(long *)((long)&lStack_f8 + lVar1) = lVar10;
            FUN_1003fb4ec(FUN_1001fa660,(long)&lStack_120 + lVar1,0xd000000000000095,
                          (ulong)local_c8 | 0x8000000000000000,&DAT_d000000000000018,
                          (ulong)local_c0 | 0x8000000000000000,0x558,0);
            FUN_1001ebe04(1,param_3,lVar10);
            *local_98 = param_3;
            local_98[1] = lVar10;
          }
        }
        else {
          _swift_bridgeObjectRelease(puVar11);
          _swift_bridgeObjectRelease(local_d0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)((long)&lStack_110 + lVar1) = param_5;
          *(int *)((long)alStack_108 + lVar1) = iVar3;
          *(undefined8 *)((long)alStack_108 + lVar1 + 8) = uVar6;
          *(long *)((long)&lStack_f8 + lVar1) = lVar4;
          FUN_1003fb4ec(FUN_1001fa650,(long)&lStack_120 + lVar1,0xd000000000000095,
                        (ulong)local_c8 | 0x8000000000000000,&DAT_d000000000000018,
                        (ulong)local_c0 | 0x8000000000000000,0x54f,0);
          FUN_1001ebe04(1,uVar6,lVar4);
          *local_98 = uVar6;
          local_98[1] = lVar4;
        }
      }
    }
  }
  else if (lVar10 == 1) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)((long)alStack_108 + lVar1 + 8) = param_3;
    *(long *)((long)&lStack_f8 + lVar1) = param_4;
    FUN_1003fb48c(FUN_1001fa634,(long)&lStack_110 + lVar1,0xd000000000000095,0x80000001008a00c0,
                  &DAT_d000000000000018,0x80000001008a10d0,0x509,0);
    FUN_1001ebe04(2,0x1000000000000016,0x80000001008a1110);
    local_98[1] = 1;
    *local_98 = 0;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)((long)&lStack_110 + lVar1) = param_3;
    *(long *)((long)alStack_108 + lVar1) = param_4;
    *(undefined8 *)((long)alStack_108 + lVar1 + 8) = uVar6;
    *(long *)((long)&lStack_f8 + lVar1) = lVar10;
    FUN_1003fb4ec(FUN_1001fa628,(long)&lStack_120 + lVar1,0xd000000000000095,0x80000001008a00c0,
                  &DAT_d000000000000018,0x80000001008a10d0,0x50d,0);
    FUN_1001ebe04(1,uVar6,lVar10);
    *local_98 = uVar6;
    local_98[1] = lVar10;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

