// rea decompile_all
// name: FUN_100125950
// address: 0x100125950
// body: available
// range: 0x100125950-0x100125adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100125950(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  uint uVar5;
  long lVar6;
  undefined1 auStack_b0 [16];
  uint local_a0;
  long local_98;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  FUN_100401b14(0);
  uVar5 = (uint)param_1;
  local_a0 = uVar5;
  local_98 = param_2;
  FUN_1003fb48c(FUN_100126508,auStack_b0,0xd000000000000098,0x800000010088de90,0xd00000000000002e,
                0x800000010088dfd0,0x76,0);
  lVar2 = _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession;
  lVar6 = *(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::room);
  uVar4 = (ulong)*(uint *)(lVar6 + 0x10);
  if (*(uint *)(lVar6 + 0x10) == uVar5) {
    if ((param_2 == 1) &&
       ((*(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession) == 0
        || (uVar1 = *(uint *)(*(long *)(unaff_x20 +
                                       _TtC14UURemoteServer18StreamerDispatcher::
                                       currentConnectSession) +
                             _TtC14UURemoteServer22StreamerConnectSession::handle),
           uVar4 = (ulong)uVar1, uVar1 != uVar5)))) {
      FUN_1000cdfb8(0);
      _objc_allocWithZone();
      uVar3 = param_1;
      FUN_1000c8ce8(param_1,1);
      uVar4 = *(ulong *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
    }
    if (*(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession) != 0)
    {
      _swift_beginAccess(uVar4,lVar6 + 0x28,auStack_68,0,0);
      FUN_1000c9470(param_1,param_2,*(undefined4 *)(lVar6 + 0x28));
    }
    if ((param_2 == 6) || (param_2 == 0)) {
      _swift_beginAccess(lVar6 + 0x28,auStack_80,0,0);
      FUN_10012601c(param_1,*(undefined4 *)(lVar6 + 0x28));
    }
  }
  return;
}

