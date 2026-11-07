// rea decompile_all
// name: FUN_100346530
// address: 0x100346530
// body: available
// range: 0x100346530-0x100346673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100346530(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined *local_50;
  undefined **ppuStack_48;
  
  puVar1 = &DAT_100a82470;
  FUN_100004bb4(&DAT_100a82470,&DAT_100819d70);
  lVar5 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  lVar2 = 0;
  __sSS10FoundationE8EncodingVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))
            (auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),1,1,lVar2);
  local_50 = &DAT_1009b38b0;
  ppuStack_48 = &PTR_PTR_1009b3790;
  puVar1 = &DAT_100a87200;
  FUN_100004bb4(&DAT_100a87200,&DAT_10081b200);
  _swift_initStaticObject();
  FUN_1003478d4();
  puVar3 = &DAT_100a83a48;
  FUN_100004bb4(&DAT_100a83a48,&DAT_100818350);
  _swift_initStaticObject();
  puVar4 = puVar3;
  FUN_1003479e8();
  FUN_100347b4c(puVar3 + 0x20);
  _swift_allocObject();
  FUN_1000a0074(auStack_68,unaff_x20 + 0x10);
  FUN_1002796b0(auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),
                unaff_x20 + _TtC9Alamofire24StringResponseSerializer::encoding);
  *(undefined **)(unaff_x20 + _TtC9Alamofire24StringResponseSerializer::emptyResponseCodes) = puVar1
  ;
  *(undefined **)(unaff_x20 + _TtC9Alamofire24StringResponseSerializer::emptyRequestMethods) =
       puVar4;
  return unaff_x20;
}

