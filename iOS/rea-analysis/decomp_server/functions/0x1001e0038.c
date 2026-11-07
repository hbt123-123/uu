// rea decompile_all
// name: FUN_1001e0038
// address: 0x1001e0038
// body: available
// range: 0x1001e0038-0x1001e01bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1001e0038(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = param_1;
  uStack_68 = param_2;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(puVar8);
  FUN_10009ff0c();
  puVar4 = puVar8;
  puVar5 = PTR___sSSN_1009957f8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(puVar8,PTR___sSSN_1009957f8,lVar3)
  ;
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(puVar8,lVar2);
  uVar11 = (ulong)puVar4 & 0xffffffffffff;
  if (((ulong)puVar5 & 0x2000000000000000) != 0) {
    uVar11 = (ulong)puVar5 >> 0x38 & 0xf;
  }
  if (uVar11 == 0) {
    bVar1 = false;
  }
  else {
    _swift_bridgeObjectRetain(puVar5);
    local_78 = puVar4;
    FUN_1001df934(puVar4,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    uVar11 = *(ulong *)(puVar4 + 0x10);
    if (uVar11 < 0x29) {
      uVar6 = 0;
      do {
        bVar1 = uVar11 == uVar6;
        if (bVar1) break;
        if (*(ulong *)(puVar4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1001e01bc);
          (*pcVar10)();
        }
        uVar7 = (ulong)*(uint *)(puVar4 + uVar6 * 4 + 0x20);
        __s10Foundation12CharacterSetV17controlCharactersACvgZ(puVar8);
        __s10Foundation12CharacterSetV8containsySbs7UnicodeO6ScalarVF();
        (*pcVar10)(puVar8,lVar2);
        uVar6 = uVar6 + 1;
      } while ((uVar7 & 1) == 0);
    }
    else {
      bVar1 = false;
    }
    _swift_release(puVar4);
  }
  return bVar1;
}

