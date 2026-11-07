// rea decompile_all
// name: FUN_10061d198
// address: 0x10061d198
// body: available
// range: 0x10061d198-0x10061d2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10061d198(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 local_68;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,0x100904f48,&TargetProtocolRequirement_100904f50);
  FUN_10061601c();
  lVar6 = param_1;
  __sSa8endIndexSivg(param_1,param_2);
  if (lVar6 != 0) {
    lVar6 = 0;
    pcVar7 = *(code **)(param_3 + 0x10);
    do {
      __sSayxSicig(&local_68,lVar6,param_1,param_2);
      uVar2 = local_68;
      lVar1 = lVar6 + 1;
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10061d2b8);
        (*pcVar7)();
      }
      uVar8 = *(undefined8 *)(lVar3 + 0x10);
      puVar4 = &DAT_1009e0548;
      _swift_allocObject(&DAT_1009e0548,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = param_2;
      *(long *)(puVar4 + 0x18) = param_3;
      *(undefined8 *)(puVar4 + 0x20) = uVar8;
      _swift_retain(uVar8);
      (*pcVar7)(FUN_10060cfbc,puVar4,param_2,param_3);
      _swift_unknownObjectRelease(uVar2);
      _swift_release(puVar4);
      lVar5 = param_1;
      __sSa8endIndexSivg(param_1,param_2);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar5);
  }
  return lVar3;
}

