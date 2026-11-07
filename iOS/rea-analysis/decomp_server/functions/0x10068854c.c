// rea decompile_all
// name: FUN_10068854c
// address: 0x10068854c
// body: available
// range: 0x10068854c-0x10068878b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068854c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long alStack_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar8 = (long)&local_80 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100ab9ee8;
  FUN_100004bb4(&DAT_100ab9ee8,&DAT_10084d558);
  lVar9 = lVar8 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + 0x31) == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    local_80 = 0x462d41392d305b25;
    uStack_78 = 0xef7d327b5d662d61;
    lVar5 = 0;
    local_70 = uVar1;
    uStack_68 = uVar2;
    __s10Foundation6LocaleVMa();
    lVar6 = lVar9;
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar9,1,1,lVar5);
    FUN_10068e4f8();
    _swift_bridgeObjectRetain(uVar2);
    *(long *)(lVar9 + -0x10) = lVar6;
    *(long *)(lVar9 + -8) = lVar6;
    uVar7 = 0;
    __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
              (&local_80,0x400,0,0,1,lVar9,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
    FUN_100040bb4(lVar9,&DAT_100ab9ee8,&DAT_10084d558);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar2);
      __s10Foundation3URLV6stringACSgSSh_tcfC(param_1,uVar1,uVar2);
    }
    else {
      local_70 = uVar1;
      uStack_68 = uVar2;
      __s10Foundation12CharacterSetV15urlQueryAllowedACvgZ(lVar8);
      lVar9 = lVar8;
      puVar4 = PTR___sSSN_1009957f8;
      __sSy10FoundationE21addingPercentEncoding21withAllowedCharactersSSSgAA12CharacterSetV_tF
                (lVar8,PTR___sSSN_1009957f8,lVar6);
      (**(code **)(lVar10 + 8))(lVar8,lVar3);
      _swift_bridgeObjectRelease(uVar2);
      if (puVar4 == (undefined *)0x0) {
        lVar3 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
      }
      else {
        __s10Foundation3URLV6stringACSgSSh_tcfC(param_1,lVar9,puVar4);
        _swift_bridgeObjectRelease(puVar4);
      }
    }
    return;
  }
  lVar3 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x000100688728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
  return;
}

