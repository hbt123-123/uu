// rea decompile_all
// name: FUN_100045ec8
// address: 0x100045ec8
// body: available
// range: 0x100045ec8-0x100045fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100045f98) */

undefined8 **** FUN_100045ec8(long param_1,code *param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  ppppuVar4 = *(undefined8 *****)(param_1 + 0x10);
  ppppuVar2 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    ppppuVar2 = ppppuVar4;
    FUN_10006d534(ppppuVar4,0);
    ppppuVar3 = &local_88;
    (*param_2)(ppppuVar3,ppppuVar2 + 4,ppppuVar4,param_1);
    _swift_bridgeObjectRetain(param_1);
    FUN_10003f638(local_88,uStack_80,local_78,uStack_70,local_68);
    if (ppppuVar3 != ppppuVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100045f58);
      (*pcVar1)();
    }
  }
  local_88 = ppppuVar2;
  FUN_10004696c(&local_88);
  return (undefined8 ****)local_88;
}

