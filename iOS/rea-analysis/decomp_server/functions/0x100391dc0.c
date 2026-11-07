// rea decompile_all
// name: FUN_100391dc0
// address: 0x100391dc0
// body: available
// range: 0x100391dc0-0x100391f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100391dc0(long param_1,ID param_2)

{
  int iVar1;
  long *plVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar4 = plVar2[1] - *plVar2;
LAB_100391e7c:
    lVar5 = (lVar4 >> 3) * -0x5555555555555555;
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    FUN_100391480(plVar2,&local_48);
    FUN_100391ae0(&local_48);
    lVar4 = (*(long **)(param_1 + 0x28))[1];
    lVar5 = (lVar4 - **(long **)(param_1 + 0x28) >> 3) * -0x5555555555555555 + -1;
    IVar3 = NSString::class((ID)&_OBJC_CLASS___NSString);
    IVar3 = objc_stub::isKindOfClass_(param_2,IVar3);
    if ((int)IVar3 == 0) {
      IVar3 = NSDate::class((ID)&_OBJC_CLASS___NSDate);
      IVar3 = objc_stub::isKindOfClass_(param_2,IVar3);
      if ((int)IVar3 != 0) {
        *(ID *)(lVar4 + -8) = param_2;
        *(undefined4 *)(lVar4 + -0x10) = 8;
        *(undefined8 *)(lVar4 + -0x18) = 0x800000005;
        return lVar5;
      }
      IVar3 = NSData::class((ID)&_OBJC_CLASS___NSData);
      IVar3 = objc_stub::isKindOfClass_(param_2,IVar3);
      if ((int)IVar3 == 0) {
        lVar5 = *(long *)(param_1 + 0x28);
        lVar4 = *(long *)(lVar5 + 8) + -0x18;
        FUN_100391ae0();
        *(long *)(lVar5 + 8) = lVar4;
        objc_stub::class(param_2);
        _NSStringFromClass();
        FUN_100386734(3,"MiniPBCoder_OSX.cpp","prepareObjectForEncode",0x47,"%@ not recognized");
        lVar4 = (*(long **)(param_1 + 0x28))[1] - **(long **)(param_1 + 0x28);
        goto LAB_100391e7c;
      }
      *(undefined4 *)(lVar4 + -0x18) = 4;
      *(ID *)(lVar4 + -8) = param_2;
    }
    else {
      *(undefined4 *)(lVar4 + -0x18) = 3;
      param_2 = objc_stub::dataUsingEncoding_(param_2,4);
      *(ID *)(lVar4 + -8) = param_2;
    }
    IVar3 = objc_stub::length(param_2);
    iVar1 = (int)IVar3;
    *(int *)(lVar4 + -0x10) = iVar1;
    FUN_10039280c();
    *(int *)(lVar4 + -0x14) = *(int *)(lVar4 + -0x10) + iVar1;
  }
  return lVar5;
}

