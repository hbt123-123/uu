// rea decompile_all
// name: FUN_100267cd4
// address: 0x100267cd4
// body: available
// range: 0x100267cd4-0x100267e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100267df4) */

undefined8 FUN_100267cd4(code *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *self;
  ID IVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_88 [40];
  
  lVar6 = *unaff_x20;
  uVar4 = *(undefined8 *)PTR__NSURLErrorDomain_100995318;
  self = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"initWithDomain:code:userInfo:",uVar4,0xfffffffffffffc19,0);
  lVar3 = unaff_x20[9];
  uVar7 = *(ulong *)(lVar3 + 0x10);
  if (uVar7 != 0) {
    uVar8 = 0;
    lVar5 = lVar3 + 0x20;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100267df4);
        (*pcVar1)();
      }
      FUN_1000b142c(lVar5,auStack_88);
      FUN_10026934c(auStack_88,IVar2,0,6,param_3,*(undefined8 *)(lVar6 + 0x50),
                    *(undefined8 *)(lVar6 + 0x58));
      uVar8 = uVar8 + 1;
      FUN_10003f094(auStack_88);
      lVar5 = lVar5 + 0x28;
    } while (uVar7 != uVar8);
  }
  (*param_1)(IVar2,0,0x106);
  return 0;
}

