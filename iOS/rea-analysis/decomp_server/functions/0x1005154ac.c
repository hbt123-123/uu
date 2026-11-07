// rea decompile_all
// name: FUN_1005154ac
// address: 0x1005154ac
// body: available
// range: 0x1005154ac-0x10051558b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1005154ac(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100900ffc,
             &TargetProtocolRequirement_10090100c);
  lVar5 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) == 0 && (lVar6 + 7U & 0xfffffffffffffff8) + 0x28 < 0x19)
  {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar2);
    uVar3 = (long)param_1 + lVar6 + 7 & 0xfffffffffffffff8;
    uVar4 = (long)param_2 + lVar6 + 7 & 0xfffffffffffffff8;
    lVar2 = *(long *)(uVar4 + 0x18);
    *(long *)(uVar3 + 0x18) = lVar2;
    *(undefined8 *)(uVar3 + 0x20) = *(undefined8 *)(uVar4 + 0x20);
    (*(code *)**(undefined8 **)(lVar2 + -8))();
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}

