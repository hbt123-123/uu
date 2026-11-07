// rea decompile_all
// name: FUN_10061d46c
// address: 0x10061d46c
// body: available
// range: 0x10061d46c-0x10061d54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10061d46c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_58;
  
  lVar4 = param_2;
  FUN_1006144cc();
  uVar5 = 0;
  FUN_100614b6c(0,param_2);
  lVar7 = param_1;
  __sSa8endIndexSivg(param_1,uVar5);
  if (lVar7 != 0) {
    lVar7 = 0;
    do {
      __sSayxSicig(&local_58,lVar7,param_1,uVar5);
      uVar2 = local_58;
      lVar1 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10061d54c);
        (*pcVar3)();
      }
      uVar8 = *(undefined8 *)(lVar4 + 0x10);
      _swift_retain(uVar8);
      FUN_100610788(FUN_100615134,uVar8);
      _swift_release(uVar2);
      _swift_release(uVar8);
      lVar6 = param_1;
      __sSa8endIndexSivg(param_1,uVar5);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar6);
  }
  return lVar4;
}

