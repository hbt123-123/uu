// rea decompile_all
// name: _TtC14UURemoteServer30ControlledProxySessionDelegate::.cxx_destruct
// address: 0x100130388
// body: available
// range: 0x100130388-0x1001303d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001303d4 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void _TtC14UURemoteServer30ControlledProxySessionDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + proxy;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x48));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar3);
  return;
}

