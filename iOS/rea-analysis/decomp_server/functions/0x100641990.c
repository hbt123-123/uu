// rea decompile_all
// name: FUN_100641990
// address: 0x100641990
// body: available
// range: 0x100641990-0x100641aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100641990(undefined8 param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x21;
  undefined **ppuVar7;
  undefined *local_68 [3];
  undefined *local_50;
  undefined **ppuStack_48;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  ppuVar7 = *(undefined ***)(lVar6 + 0x18);
  ppuVar2 = (undefined **)PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar2 = ppuVar7;
    FUN_100630840(ppuVar7,0);
    ppuVar3 = local_68;
    FUN_1006413c4(ppuVar3,ppuVar2 + 4,ppuVar7);
    _swift_retain(lVar6);
    _swift_release(local_68[0]);
    if (ppuVar3 != ppuVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100641a00);
      (*pcVar1)();
    }
  }
  puVar4 = &DAT_100ab7e50;
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  _swift_initStaticObject();
  local_50 = &DAT_1009e1d88;
  ppuStack_48 = &PTR_PTR_1009e1d00;
  puVar5 = &DAT_1009e3620;
  _swift_allocObject(&DAT_1009e3620,0x29,7);
  *(undefined8 *)(puVar5 + 0x10) = 6;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  puVar5[0x28] = 1;
  local_68[0] = puVar5;
  FUN_10062e36c(0);
  _swift_allocObject();
  FUN_10062c4d8(ppuVar2,local_68,0);
  if (unaff_x21 == 0) {
    _swift_retain();
    FUN_100641ef8(param_1,ppuVar2,&PTR_PTR_1009e11f8);
    _swift_release_n(ppuVar2,2);
  }
  return param_1;
}

