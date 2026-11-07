// rea decompile_all
// name: FUN_1005155ec
// address: 0x1005155ec
// body: available
// range: 0x1005155ec-0x10051567f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1005155ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100900ffc,
             &TargetProtocolRequirement_10090100c);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  uVar2 = lVar1 + param_1 & 0xfffffffffffffff8;
  uVar3 = lVar1 + param_2 & 0xfffffffffffffff8;
  lVar1 = *(long *)(uVar3 + 0x18);
  *(long *)(uVar2 + 0x18) = lVar1;
  *(undefined8 *)(uVar2 + 0x20) = *(undefined8 *)(uVar3 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}

