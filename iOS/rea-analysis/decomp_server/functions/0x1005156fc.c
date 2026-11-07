// rea decompile_all
// name: FUN_1005156fc
// address: 0x1005156fc
// body: available
// range: 0x1005156fc-0x100515783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1005156fc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100900ffc,
             &TargetProtocolRequirement_10090100c);
  lVar5 = *(long *)(lVar1 + -8);
  (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar4 = puVar2[4];
  uVar8 = *puVar2;
  uVar7 = puVar2[3];
  uVar6 = puVar2[2];
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
  puVar3[4] = uVar4;
  return param_1;
}

