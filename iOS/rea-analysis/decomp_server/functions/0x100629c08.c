// rea decompile_all
// name: FUN_100629c08
// address: 0x100629c08
// body: available
// range: 0x100629c08-0x100629ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100629c08(long param_1,long param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined auStack_68 [24];
  undefined8 local_50;
  
  if ((param_3 & 0xff) == 0) {
    if (param_2 != 0) {
      puVar4 = (undefined *)0x2;
      goto LAB_100629c64;
    }
    puVar4 = (undefined *)(ulong)(param_1 != 0);
  }
  else if (((uint)param_3 & 0xff) == 1) {
    puVar4 = (undefined *)(param_2 - param_1);
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100629cec);
      (*pcVar1)();
    }
    if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100629c50);
      (*pcVar1)();
    }
  }
  else {
    puVar4 = *(undefined **)(param_4 + 0x10);
  }
  if (puVar4 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
LAB_100629c64:
  puVar2 = puVar4;
  FUN_100629f38(puVar4,0);
  puVar3 = auStack_68;
  FUN_100641140(puVar3,puVar2 + 0x20,puVar4,param_1,param_2,param_3,param_4);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRelease(local_50);
  if (puVar3 == puVar4) {
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100629cb8);
  (*pcVar1)();
}

