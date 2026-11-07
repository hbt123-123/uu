// rea decompile_all
// name: FUN_10031a004
// address: 0x10031a004
// body: available
// range: 0x10031a004-0x10031a0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10031a004(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  (**(code **)(*(long *)(param_3 + -8) + 0x10))
            (&stack0xffffffffffffffc0 +
             -(*(long *)(*(long *)(param_3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),param_1);
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x1008f871c,&TargetProtocolRequirement_1008f8724);
  FUN_100319448();
  _swift_retain();
  return unaff_x20;
}

