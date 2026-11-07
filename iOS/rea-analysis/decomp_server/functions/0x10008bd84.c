// rea decompile_all
// name: FUN_10008bd84
// address: 0x10008bd84
// body: available
// range: 0x10008bd84-0x10008bfc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008bd84(int param_1,long param_2,undefined8 param_3,int param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  int aiStack_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  local_98 = param_7;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)&local_a0 + lVar1;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  lVar6 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  if (param_2 != 0) {
    local_a0 = param_8;
    _swift_beginAccess(param_2 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                       auStack_90,0,0);
    (**(code **)(lVar7 + 0x10))(uVar8,param_2 + lVar6,lVar3);
    uVar4 = uVar8;
    __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar8,param_3);
    (**(code **)(lVar7 + 8))(uVar8,lVar3);
    if ((uVar4 & 1) != 0) {
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      lVar6 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                       _TtC14UURemoteServer15StreamerManager::dispatcher);
      if ((lVar6 != 0) &&
         (lVar6 = *(long *)(lVar6 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
         , lVar6 != 0)) {
        if (*(int *)(lVar6 + _TtC14UURemoteServer22StreamerConnectSession::handle) == param_4) {
          if (param_1 != 0) {
            uVar5 = 0;
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)(uVar5);
            *(long *)((long)&lStack_b0 + lVar1) = param_5;
            *(int *)((long)aiStack_a8 + lVar1) = param_1;
            FUN_1003fb4bc(FUN_1000931f4,auStack_c0 + lVar1,0xd00000000000009f,0x800000010087e740,
                          0x3a5f28796c707061,0xe900000000000029,0x1fb,0);
          }
          if (SCARRY8(param_5,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10008bfc4);
            (*pcVar2)();
          }
          *(int *)((long)&lStack_b0 + lVar1) = param_4;
          FUN_10008b874(param_5 + 1,param_6,local_98,local_a0,param_9,param_10,param_11,param_3);
        }
      }
    }
    _swift_release(param_2);
  }
  return;
}

