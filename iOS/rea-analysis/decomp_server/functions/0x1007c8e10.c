// rea decompile_all
// name: _TtC6Sentry23SentryRRWebOptionsEvent::initWithTimestamp:customOptions:
// address: 0x1007c8e10
// body: available
// range: 0x1007c8e10-0x1007c8f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry23SentryRRWebOptionsEvent::initWithTimestamp_customOptions_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar2 = &stack0xffffffffffffffb0 + -uVar3;
  lVar4 = (long)puVar2 - uVar3;
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar4,param_3);
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_1009957f8,PTR___sypN_100995e88 + 8,PTR___sSSSHsWP_100995808);
  (**(code **)(lVar5 + 0x10))(puVar2,lVar4,lVar1);
  FUN_1007cf0e4(puVar2,0x736e6f6974706f,0xe700000000000000,param_4);
  _swift_bridgeObjectRelease(param_4);
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  return (ID)puVar2;
}

