// rea decompile_all
// name: FUN_10068878c
// address: 0x10068878c
// body: available
// range: 0x10068878c-0x100688913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068878c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *local_68;
  ID local_60 [3];
  undefined8 local_48;
  
  puVar3 = &DAT_100ab9ef0;
  FUN_100004bb4(&DAT_100ab9ef0,&DAT_10084d560);
  lVar6 = (long)&local_80 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_1,lVar6,&DAT_100ab9ef0,&DAT_10084d560);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  uVar5 = 1;
  lVar2 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,lVar1);
  if ((int)lVar2 == 1) {
    FUN_100040bb4(lVar6,&DAT_100ab9ef0,&DAT_10084d560);
    uStack_78 = 0;
    local_80 = 0;
    local_68 = (undefined *)0x0;
    uStack_70 = 0;
    puVar3 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    IVar4 = _objc_msgSend((ID)puVar3,"init");
    uVar5 = 0;
    FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
    local_60[0] = IVar4;
    local_48 = uVar5;
    if (local_68 != (undefined *)0x0) {
      FUN_100040bb4(&local_80,&DAT_100ab9ed0,&DAT_10084d550);
    }
  }
  else {
    __s10Foundation3URLV14absoluteStringSSvg();
    local_68 = PTR___sSSN_1009957f8;
    local_80 = lVar2;
    uStack_78 = uVar5;
    (**(code **)(lVar7 + 8))(lVar6,lVar1);
    FUN_10007f3d4(&local_80,local_60);
  }
  FUN_10067f3d8(local_60);
  FUN_100040bb4(param_1,&DAT_100ab9ef0,&DAT_10084d560);
  return;
}

