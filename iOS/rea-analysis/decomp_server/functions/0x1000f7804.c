// rea decompile_all
// name: FUN_1000f7804
// address: 0x1000f7804
// body: available
// range: 0x1000f7804-0x1000f794b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f7804(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar3 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar7 = *unaff_x20;
  lVar4 = param_3;
  uVar5 = param_4;
  FUN_1001a2c70(param_3);
  uVar6 = (ulong)~(uint)uVar5 & 1;
  lVar1 = *(long *)(uVar7 + 0x10) + uVar6;
  if (SCARRY8(*(long *)(uVar7 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f78f0);
    (*pcVar2)();
  }
  if (*(long *)(uVar7 + 0x18) < lVar1) {
    FUN_1000675f0(lVar1,uVar3);
    uVar3 = param_4;
    FUN_1001a2c70(param_3);
    lVar4 = param_3;
    if (((uint)uVar5 & 1) != ((uint)uVar3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f78b8);
      (*pcVar2)();
    }
  }
  else if ((uVar3 & 1) == 0) {
    FUN_100063670();
  }
  if ((uVar5 & 1) == 0) {
    FUN_100060330();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    _swift_bridgeObjectRetain(param_4);
  }
  else {
    FUN_10007f3d4(*(long *)(uVar7 + 0x38) + lVar4 * 0x20,param_1);
    FUN_10007f3d4(param_2,*(long *)(uVar7 + 0x38) + lVar4 * 0x20);
  }
  *unaff_x20 = uVar7;
  return;
}

