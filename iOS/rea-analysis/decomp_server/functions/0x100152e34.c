// rea decompile_all
// name: FUN_100152e34
// address: 0x100152e34
// body: available
// range: 0x100152e34-0x100152fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100152e34(code *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  code *local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar5 = 0;
  local_80 = param_1;
  __s10Foundation3URLVMa();
  local_78 = *(long *)(lVar5 + -8);
  lStack_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_78 + 0x40));
  uVar8 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)uVar7 < 0x40) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x40);
  local_68 = param_3;
  _swift_bridgeObjectRetain(param_3);
  lVar5 = 0;
  while( true ) {
    while (lVar2 = lStack_70, lVar1 = local_78, uVar9 == 0) {
      bVar4 = SCARRY8(lVar5,1);
      lVar5 = lVar5 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100152fcc);
        (*pcVar3)();
      }
      if ((long)(uVar7 + 0x3f >> 6) <= lVar5) {
        param_2 = 0;
        goto LAB_100152f7c;
      }
      uVar9 = ((ulong *)(param_3 + 0x40))[lVar5];
    }
    uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    (**(code **)(local_78 + 0x10))
              (uVar8,*(long *)(local_68 + 0x38) +
                     *(long *)(local_78 + 0x48) *
                     (LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar5 << 6),lStack_70);
    uVar6 = uVar8;
    (*local_80)();
    if (unaff_x21 != 0) break;
    uVar9 = uVar9 - 1 & uVar9;
    (**(code **)(lVar1 + 8))(uVar8,lVar2);
    if ((uVar6 & 1) != 0) {
      param_2 = 1;
LAB_100152f7c:
      _swift_release(local_68);
LAB_100152f84:
      return param_2 & 1;
    }
  }
  (**(code **)(lVar1 + 8))(uVar8,lVar2);
  _swift_release(local_68);
  goto LAB_100152f84;
}

