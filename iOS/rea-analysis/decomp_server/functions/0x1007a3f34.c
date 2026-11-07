// rea decompile_all
// name: SentryStacktraceBuilder::buildStackTraceFromStackEntries:amount:
// address: 0x1007a3f34
// body: available
// range: 0x1007a3f34-0x1007a40ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a40ec to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID SentryStacktraceBuilder::buildStackTraceFromStackEntries_amount_
             (ID param_1,SEL param_2,AnonymousStructure4 *param_3,unsigned_int param_4)

{
  undefined *self;
  ID IVar1;
  ID IVar2;
  class_t *self_00;
  ulong uVar3;
  ID IVar4;
  unsigned_long_long uVar5;
  char **ppcVar6;
  unsigned_long_long local_a8;
  char *local_a0;
  unsigned_long_long uStack_98;
  char *pcStack_90;
  unsigned_long_long uStack_88;
  char *local_80;
  unsigned_long_long uStack_78;
  char *pcStack_70;
  unsigned_long_long uStack_68;
  
  uVar3 = (ulong)param_4;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar1 = objc_stub::initWithCapacity_((ID)self,uVar3);
  if (param_4 != 0) {
    IVar4 = 0;
    ppcVar6 = &param_3->field1_0x8;
    do {
      uVar5 = ((AnonymousStructure4 *)(ppcVar6 + -1))->field0_0x0;
      uStack_78 = (unsigned_long_long)ppcVar6[1];
      local_80 = *ppcVar6;
      uStack_68 = (unsigned_long_long)ppcVar6[3];
      pcStack_70 = ppcVar6[2];
      if (uVar5 == 0xfffffffffffffb2d) {
        if (IVar4 != 0) {
          IVar2 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
          objc_stub::FUN_1007f4ca0(IVar4,IVar2);
        }
      }
      else {
        IVar4 = objc_stub::FUN_1007e7500(param_1);
        uStack_98 = uStack_78;
        local_a0 = local_80;
        uStack_88 = uStack_68;
        pcStack_90 = pcStack_70;
        local_a8 = uVar5;
        IVar4 = objc_stub::FUN_1007f1540(IVar4,&local_a8);
        objc_stub::addObject_(IVar1,IVar4);
      }
      ppcVar6 = ppcVar6 + 5;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  IVar1 = objc_stub::FUN_1007f04a0((ID)&objc::class_t::SentryFrameRemover,IVar1);
  IVar1 = objc_stub::reverseObjectEnumerator(IVar1);
  IVar1 = objc_stub::allObjects(IVar1);
  self_00 = &objc::class_t::SentryStacktrace;
  _objc_alloc();
  IVar1 = objc_stub::initWithFrames_registers_
                    ((ID)self_00,IVar1,*(undefined8 *)PTR____NSDictionary0___1009953b0);
  return IVar1;
}

