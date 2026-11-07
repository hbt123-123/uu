// rea decompile_all
// name: FUN_1002553d4
// address: 0x1002553d4
// body: available
// range: 0x1002553d4-0x10025559b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002553d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar9 = *(long *)(lVar1 + -8);
  lVar8 = (long)&local_70 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar10 = lVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar3 = lVar10 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_100254330();
  local_70 = uVar4;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100254374();
  puVar5 = &DAT_100a80038;
  FUN_100004bb4(&DAT_100a80038,&DAT_100814740);
  puVar6 = puVar5;
  FUN_1002543b8();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&local_68,puVar5,puVar6,lVar2,uVar4);
  (**(code **)(lVar9 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lVar1);
  uVar4 = 0xd00000000000001a;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd00000000000001a,0x80000001008a7a60,lVar3,lVar10,lVar8,0);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  IVar7 = NSHashTable::weakObjectsHashTable((ID)&_OBJC_CLASS___NSHashTable,"weakObjectsHashTable");
  *(ID *)(unaff_x20 + 0x20) = IVar7;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_100254554();
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  puVar5 = &DAT_100a80048;
  FUN_100004bb4(&DAT_100a80048,&DAT_100814748);
  _swift_initStaticObject();
  *(undefined **)(unaff_x20 + 0x38) = puVar5;
  return;
}

