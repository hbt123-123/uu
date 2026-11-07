// rea decompile_all
// name: _TtC6Sentry13SentryMXFrame::setBinaryUUID:
// address: 0x1007bedc0
// body: available
// range: 0x1007bedc0-0x1007bee8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry13SentryMXFrame::setBinaryUUID_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = auStack_60 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(puVar3,param_3);
  lVar1 = param_1 + binaryUUID;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  (**(code **)(lVar4 + 0x18))(lVar1,puVar3,lVar2);
  _swift_endAccess(auStack_58);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}

