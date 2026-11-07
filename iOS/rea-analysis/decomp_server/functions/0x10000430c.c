// rea decompile_all
// name: entry
// address: 0x10000430c
// body: available
// range: 0x10000430c-0x100004683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 entry(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  ID IVar9;
  char *pcVar10;
  char *pcVar11;
  
  FUN_100401b14();
  if (DAT_100a73bb8 != -1) {
    _swift_once(&DAT_100a73bb8,FUN_10019b2f8);
  }
  uVar5 = DAT_100b36270;
  uVar3 = DAT_100b36268;
  lVar1 = DAT_100a73bb0;
  _swift_bridgeObjectRetain(DAT_100b36270);
  if (lVar1 != -1) {
    _swift_once(&DAT_100a73bb0,FUN_10019b250);
  }
  uVar4 = DAT_100b36260;
  uVar2 = DAT_100b36258;
  _swift_bridgeObjectRetain(DAT_100b36260);
  FUN_1003fc354(uVar3,uVar5,uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar4);
  FUN_1003fb48c(FUN_100004684,0,0xd000000000000081,0x8000000100876410,0x65746f6d65525555,
                0xee00726576726553,0xd,0);
  uVar4 = DAT_100b36270;
  uVar2 = DAT_100b36268;
  uVar5 = DAT_100b36260;
  uVar3 = DAT_100b36258;
  lVar1 = DAT_100a73bc0;
  _swift_bridgeObjectRetain(DAT_100b36270);
  _swift_bridgeObjectRetain(uVar5);
  if (lVar1 != -1) {
    _swift_once(&DAT_100a73bc0,FUN_10019b380);
  }
  uVar7 = DAT_100b36280;
  uVar6 = DAT_100b36278;
  _swift_bridgeObjectRetain(DAT_100b36280);
  pcVar10 = "mainBundle";
  IVar8 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  FUN_100407910(IVar8);
  IVar9 = StreamerWrapper::shared((ID)&objc::class_t::StreamerWrapper,"shared");
  pcVar11 = "streamerVersion";
  StreamerWrapper::streamerVersion(IVar9,"streamerVersion");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  FUN_1004032fc(uVar2,uVar4,uVar3,uVar5,uVar6,uVar7,IVar8,pcVar10,1);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(pcVar11);
  _swift_bridgeObjectRelease(pcVar10);
  FUN_1003fb48c(FUN_1000046b0,0,0xd000000000000081,0x8000000100876410,0x65746f6d65525555,
                0xee00726576726553,0x14,0);
  IVar8 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication,"sharedApplication");
  if (DAT_100a73b30 != -1) {
    _swift_once(&DAT_100a73b30,FUN_1000acde0);
  }
  NSApplication::setDelegate_(IVar8,"setDelegate:",DAT_100b36098);
  IVar8 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication,"sharedApplication");
  NSApplication::run(IVar8,"run");
  return 0;
}

