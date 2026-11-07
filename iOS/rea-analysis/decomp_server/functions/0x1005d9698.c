// rea decompile_all
// name: FUN_1005d9698
// address: 0x1005d9698
// body: available
// range: 0x1005d9698-0x1005d9c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1005d9698(ID param_1,long *param_2,long *param_3)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  code *pcVar11;
  undefined1 auStack_e0 [72];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  IVar2 = param_1;
  plVar10 = param_2;
  FUN_1005d0428();
  if ((ulong)plVar10 >> 0x3c < 0xf) {
    _swift_beginAccess(&DAT_100b3a708,auStack_78,0,0);
    uVar3 = DAT_100b3a710;
    pcVar11 = DAT_100b3a708;
    if (DAT_100b3a708 != (code *)0x0) {
      local_80 = PTR___sSSN_1009957f8;
      local_98 = 0xd000000000000022;
      uStack_90 = 0x80000001008be5c0;
      _swift_retain(DAT_100b3a710);
      puVar4 = &local_98;
      puVar5 = PTR___sypN_100995e88 + 8;
      __sSS10describingSSx_tclufC(puVar4,puVar5);
      (*pcVar11)(0,puVar4,puVar5,
                 "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                 ,0xb7,2,"fetchCodeReferences(connection:secCodeOptional:secStaticCodeOptional:)",
                 0x46,2);
      FUN_10007ed2c(pcVar11,uVar3);
      _swift_bridgeObjectRelease(puVar5);
    }
    puVar5 = &DAT_100aae058;
    FUN_100004bb4(&DAT_100aae058,&DAT_10083f4c8);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)PTR__kSecGuestAttributeAudit_100995688;
    IVar6 = IVar2;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(IVar2,plVar10);
    *(ID *)(puVar5 + 0x28) = IVar6;
    puVar7 = puVar5;
    FUN_1005d9420(puVar5);
    _swift_setDeallocating(puVar5);
    FUN_100040bb4(puVar5 + 0x20,&DAT_100aae060,&DAT_10083f4d0);
    uVar3 = 0;
    FUN_1005d0388(0);
    uVar8 = 0;
    FUN_1005d0374(0);
    puVar5 = &DAT_100aadaa8;
    FUN_1005d03e4(&DAT_100aadaa8,&TargetProtocolConformanceDescriptor_10083f134);
    puVar9 = puVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF(puVar7,uVar3,uVar8,puVar5);
    FUN_100006cc8(IVar2,plVar10);
  }
  else {
    _swift_beginAccess(&DAT_100b3a708,auStack_78,0,0);
    uVar3 = DAT_100b3a710;
    pcVar11 = DAT_100b3a708;
    if (DAT_100b3a708 != (code *)0x0) {
      local_80 = PTR___sSSN_1009957f8;
      local_98 = 0xd000000000000040;
      uStack_90 = 0x80000001008be4e0;
      _swift_retain(DAT_100b3a710);
      puVar4 = &local_98;
      puVar5 = PTR___sypN_100995e88 + 8;
      __sSS10describingSSx_tclufC(puVar4,puVar5);
      (*pcVar11)(2,puVar4,puVar5,
                 "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                 ,0xb7,2,"fetchCodeReferences(connection:secCodeOptional:secStaticCodeOptional:)",
                 0x46,2);
      FUN_10007ed2c(pcVar11,uVar3);
      _swift_bridgeObjectRelease(puVar5);
    }
    IVar2 = _objc_msgSend(param_1,"processIdentifier");
    puVar5 = &DAT_100aae048;
    FUN_100004bb4(&DAT_100aae048,&DAT_10083f4b8);
    _swift_initStackObject();
    puVar7 = PTR__kSecGuestAttributePid_100995690;
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)puVar7;
    *(int *)(puVar5 + 0x28) = (int)IVar2;
    puVar7 = puVar5;
    FUN_1005d9518(puVar5);
    _swift_setDeallocating(puVar5);
    FUN_100040bb4(puVar5 + 0x20,&DAT_100aae050,&DAT_10083f4c0);
    uVar3 = 0;
    FUN_1005d0388(0);
    puVar5 = &DAT_100aadaa8;
    FUN_1005d03e4(&DAT_100aadaa8,&TargetProtocolConformanceDescriptor_10083f134);
    puVar9 = puVar7;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar7,uVar3,PTR___ss5Int32VN_100995c78,puVar5);
  }
  _swift_bridgeObjectRelease(puVar7);
  iVar1 = 0;
  _SecCodeCopyGuestWithAttributes(0,puVar9,0,param_2);
  if (iVar1 == 0) {
    if (*param_2 != 0) {
      _SecCodeCopyStaticCode(*param_2,0,param_3);
      if (*param_3 != 0) {
        return 1;
      }
      _swift_beginAccess(&DAT_100b3a708,auStack_e0,0,0);
      uVar3 = DAT_100b3a710;
      pcVar11 = DAT_100b3a708;
      if (DAT_100b3a708 == (code *)0x0) {
        return 0;
      }
      local_80 = PTR___sSSN_1009957f8;
      local_98 = 0xd000000000000021;
      uStack_90 = 0x80000001008be590;
      _swift_retain(DAT_100b3a710);
      puVar4 = &local_98;
      puVar5 = PTR___sypN_100995e88 + 8;
      __sSS10describingSSx_tclufC(puVar4,puVar5);
      (*pcVar11)(3,puVar4,puVar5,
                 "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                 ,0xb7,2,"fetchCodeReferences(connection:secCodeOptional:secStaticCodeOptional:)",
                 0x46,2);
      goto LAB_1005d9abc;
    }
    _swift_beginAccess(&DAT_100b3a708,auStack_e0,0,0);
    uVar3 = DAT_100b3a710;
    pcVar11 = DAT_100b3a708;
    if (DAT_100b3a708 == (code *)0x0) {
      return 0;
    }
    local_80 = PTR___sSSN_1009957f8;
    local_98 = 0xd00000000000001b;
    uStack_90 = 0x80000001008be570;
    _swift_retain(DAT_100b3a710);
    puVar4 = &local_98;
    puVar5 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(puVar4,puVar5);
  }
  else {
    _swift_beginAccess(&DAT_100b3a708,auStack_e0,0,0);
    uVar3 = DAT_100b3a710;
    pcVar11 = DAT_100b3a708;
    if (DAT_100b3a708 == (code *)0x0) {
      return 0;
    }
    local_80 = PTR___sSSN_1009957f8;
    local_98 = 0xd000000000000038;
    uStack_90 = 0x80000001008be530;
    _swift_retain(DAT_100b3a710);
    puVar4 = &local_98;
    puVar5 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(puVar4,puVar5);
  }
  (*pcVar11)(3,puVar4,puVar5,
             "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
             ,0xb7,2,"fetchCodeReferences(connection:secCodeOptional:secStaticCodeOptional:)",0x46,2
            );
LAB_1005d9abc:
  FUN_10007ed2c(pcVar11,uVar3);
  _swift_bridgeObjectRelease(puVar5);
  return 0;
}

