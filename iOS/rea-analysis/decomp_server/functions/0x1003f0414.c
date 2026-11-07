// rea decompile_all
// name: FUN_1003f0414
// address: 0x1003f0414
// body: available
// range: 0x1003f0414-0x1003f04cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_1003f0414(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [48];
  
  puVar1 = param_1;
  FUN_10060edd8();
  _swift_beginAccess();
  uVar3 = *puVar1;
  _swift_beginAccess(puVar1,auStack_80,0,0);
  local_98 = *(undefined1 *)(puVar1 + 2);
  pcVar2 = FUN_1003f04cc;
  local_b0 = uVar3;
  uStack_a8 = param_3;
  local_a0 = param_4;
  local_90 = param_1;
  uStack_88 = param_2;
  FUN_1006152f0(FUN_1003f04cc,auStack_c0);
  return pcVar2;
}

