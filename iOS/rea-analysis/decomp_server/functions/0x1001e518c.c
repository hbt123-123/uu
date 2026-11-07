// rea decompile_all
// name: FUN_1001e518c
// address: 0x1001e518c
// body: available
// range: 0x1001e518c-0x1001e55a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e518c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  long param_5,long param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_160 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  
  _swift_beginAccess(param_5 + 0x10,auStack_d8,0,0);
  param_5 = param_5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar5 = _TtC14UURemoteServer15TerminalManager::sessions;
  if (param_5 != 0) {
    if (param_4 == '\0') {
      puVar4 = &local_c0;
      _swift_beginAccess(param_5 + _TtC14UURemoteServer15TerminalManager::sessions,puVar4,0x20,0);
      lVar5 = *(long *)(param_5 + lVar5);
      if ((*(long *)(lVar5 + 0x10) == 0) || (thunk_FUN_1001a2c34(), ((ulong)puVar4 & 1) == 0)) {
        _swift_endAccess(&local_c0);
      }
      else {
        lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + param_6 * 8);
        _swift_endAccess(&local_c0);
        lVar5 = *(long *)(param_5 + _TtC14UURemoteServer15TerminalManager::tmuxController);
        if (lVar5 != 0) {
          lVar6 = ((undefined8 *)(lVar7 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))
                  [1];
          if (lVar6 != 0) {
            local_120 = *(undefined8 *)
                         (lVar7 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
            local_110 = *(undefined8 *)(lVar5 + 0x30);
            uVar1 = *(undefined8 *)(lVar5 + 0x38);
            local_100 = *(undefined8 *)(lVar5 + 0x60);
            uVar2 = *(undefined8 *)(lVar5 + 0x68);
            local_f0 = *(undefined8 *)(lVar5 + 0x40);
            uVar3 = *(undefined8 *)(lVar5 + 0x48);
            local_e0 = 0;
            local_80 = 0;
            lStack_118 = lVar6;
            uStack_108 = uVar1;
            uStack_f8 = uVar2;
            uStack_e8 = uVar3;
            local_c0 = local_120;
            lStack_b8 = lVar6;
            local_b0 = local_110;
            uStack_a8 = uVar1;
            local_a0 = local_100;
            uStack_98 = uVar2;
            uStack_90 = local_f0;
            local_88 = uVar3;
            _swift_retain(lVar7);
            _swift_bridgeObjectRetain(lVar6);
            _swift_bridgeObjectRetain(uVar1);
            _swift_bridgeObjectRetain(uVar2);
            _swift_bridgeObjectRetain(uVar3);
            (*param_7)(&local_c0);
            FUN_1001e6690(&local_120);
            _swift_release(lVar7);
            return;
          }
        }
      }
      local_120 = CONCAT71(local_120._1_7_,1);
      lStack_b8 = 0xd000000000000011;
      local_c0 = 500;
      local_b0 = 0x800000010089fda0;
      uStack_a8 = 0x1000000000000012;
      local_a0 = 0x800000010089fdc0;
      local_80 = 1;
      (*param_7)(&local_c0);
    }
    else {
      local_150 = param_1;
      uStack_148 = param_2;
      local_140 = param_3;
      local_130 = param_8;
      local_128 = param_7;
      local_c0 = param_1;
      uStack_a8 = param_2;
      local_a0 = param_3;
      if (param_4 == '\x01') {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        _swift_bridgeObjectRetain(param_3);
        FUN_1003fb4ec(FUN_1001e6684,auStack_160,0xd000000000000099,0x800000010089fc50,
                      0xd00000000000001e,0x800000010089fcf0,0x80,0);
        local_e0 = 1;
        lStack_b8 = 0xd000000000000011;
        local_b0 = 0x800000010089fda0;
        uStack_90 = lStack_118;
        uStack_98 = local_120;
        local_88 = local_110;
        local_80 = 1;
        (*local_128)(&local_c0);
        FUN_1001cbd94(param_1,param_2,param_3,1);
      }
      else {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        _swift_bridgeObjectRetain(param_3);
        FUN_1003fb4ec(FUN_1001e6678,auStack_160,0xd000000000000099,0x800000010089fc50,
                      0xd00000000000001e,0x800000010089fcf0,0x83,0);
        local_e0 = 1;
        lStack_b8 = 0xd000000000000011;
        local_b0 = 0x800000010089fda0;
        uStack_90 = lStack_118;
        uStack_98 = local_120;
        local_88 = local_110;
        local_80 = 1;
        (*local_128)(&local_c0);
        FUN_1001cbd94(param_1,param_2,param_3,2);
      }
    }
  }
  return;
}

