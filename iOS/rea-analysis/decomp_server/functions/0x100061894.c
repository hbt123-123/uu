// rea decompile_all
// name: FUN_100061894
// address: 0x100061894
// body: available
// range: 0x100061894-0x1000619fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006199c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000619e4 to 0x100060710 FUN_100060710 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100061894(undefined8 param_1,ulong param_2,undefined8 param_3,byte param_4,long param_5,
                  uint param_6)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar4 = param_5;
  uVar6 = param_2;
  thunk_FUN_1001a2c34();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar1 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000619ec);
    (*pcVar3)();
  }
  lVar7 = *(long *)(lVar9 + 0x18);
  if ((lVar7 < lVar1) || ((param_6 & 1) == 0)) {
    if ((lVar7 < lVar1) || ((param_6 & 1) != 0)) {
      param_6 = param_6 & 1;
      FUN_100068bc0(lVar1);
      thunk_FUN_1001a2c34();
      lVar4 = param_5;
      if (((uint)uVar6 & 1) != (param_6 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___ss6UInt32VN_100995dc0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000619fc);
        (*pcVar3)();
      }
    }
    else {
      FUN_1000640e8();
    }
  }
  if ((uVar6 & 1) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 0x20);
    uVar5 = *puVar2;
    *puVar2 = param_1;
    puVar2[1] = param_2;
    *(byte *)(puVar2 + 2) = (byte)param_3 & 1;
    *(int *)((long)puVar2 + 0x14) = (int)((ulong)param_3 >> 0x20);
    *(byte *)(puVar2 + 3) = param_4 & 1;
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
  FUN_100060710();
  return;
}

