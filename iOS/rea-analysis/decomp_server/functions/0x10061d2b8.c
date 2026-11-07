// rea decompile_all
// name: FUN_10061d2b8
// address: 0x10061d2b8
// body: available
// range: 0x10061d2b8-0x10061d46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10061d2b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long local_68;
  
  uVar2 = 0;
  local_68 = param_1;
  __sSaMa();
  puVar5 = PTR___sSayxGSlsMc_1009958b0;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar2);
  __sSlsE7isEmptySbvg(uVar2,puVar5);
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined *)0x0;
    _swift_getAssociatedTypeWitness
              (0,param_3,param_2,0x100904f48,&TargetProtocolRequirement_100904f50);
    FUN_10061601c();
    lVar8 = param_1;
    __sSa8endIndexSivg(param_1,param_2);
    if (lVar8 != 0) {
      lVar8 = 0;
      pcVar9 = *(code **)(param_3 + 0x10);
      do {
        __sSayxSicig(&local_68,lVar8,param_1,param_2);
        lVar7 = local_68;
        lVar1 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10061d46c);
          (*pcVar9)();
        }
        uVar3 = *(undefined8 *)(puVar5 + 0x10);
        puVar6 = &DAT_1009e0570;
        _swift_allocObject(&DAT_1009e0570,0x28,7);
        *(undefined8 *)(puVar6 + 0x10) = param_2;
        *(long *)(puVar6 + 0x18) = param_3;
        *(undefined8 *)(puVar6 + 0x20) = uVar3;
        _swift_retain(uVar3);
        (*pcVar9)(thunk_FUN_10060cfbc,puVar6,param_2,param_3);
        _swift_unknownObjectRelease(lVar7);
        _swift_release(puVar6);
        lVar7 = param_1;
        __sSa8endIndexSivg(param_1,param_2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar7);
    }
  }
  else {
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_3,param_2,0x100904f48,&TargetProtocolRequirement_100904f50);
    puVar4 = (undefined8 *)0x0;
    FUN_100616218(0,uVar3);
    FUN_10060d02c();
    puVar5 = &DAT_1009df040;
    _swift_allocError(&DAT_1009df040,puVar4,0,0);
    *puVar4 = 2;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 5) = 2;
    FUN_1006154e0();
  }
  return puVar5;
}

