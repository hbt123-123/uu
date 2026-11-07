// rea decompile_all
// name: FUN_1000871b4
// address: 0x1000871b4
// body: available
// range: 0x1000871b4-0x10008726b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000871b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar3,uVar2,0x1000e2040,&TargetProtocolRequirement_1000e2050)
  ;
  lVar5 = 0;
  __sSqMa(0,uVar4);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar6 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8));
  FUN_1000855d8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar6,*puVar1,
                puVar1[1],puVar1[2],uVar2,uVar3);
  return;
}

