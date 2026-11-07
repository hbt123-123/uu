// rea decompile_all
// name: FUN_100624390
// address: 0x100624390
// body: available
// range: 0x100624390-0x1006244c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100624390(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_88 [3];
  long local_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1,auStack_68,0x21,0);
  __sSt4next7ElementQzSgyFTj(local_88,param_5,param_6);
  _swift_endAccess(auStack_68);
  if (local_88[0] != 0) {
    lVar4 = *param_2;
    *param_2 = local_88[0];
    _swift_unknownObjectRetain(local_88[0]);
    _swift_unknownObjectRelease(lVar4);
    _swift_beginAccess(param_3,auStack_68,1,0);
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006244c8);
      (*pcVar1)();
    }
    *param_3 = *param_3 + 1;
    local_70 = local_88[0];
    _swift_beginAccess(param_4,local_88,0x21,0);
    uVar2 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_6,param_5,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
    uVar3 = 0;
    __sSaMa(0,uVar2);
    _swift_unknownObjectRetain(local_88[0]);
    __sSa6appendyyxnF(&local_70,uVar3);
    _swift_endAccess(local_88);
    _swift_unknownObjectRelease(local_88[0]);
  }
  return;
}

