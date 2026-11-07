// rea decompile_all
// name: FUN_10069d89c
// address: 0x10069d89c
// body: available
// range: 0x10069d89c-0x10069db03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069d9b0 to 0x1007dddec /usr/lib/libc++.1.dylib::std::string::operator= (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10069db00 to 0x1007ddde0 /usr/lib/libc++.1.dylib::std::string::operator= (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069d89c(string *param_1)

{
  string sVar1;
  string sVar2;
  bool bVar3;
  ulong uVar4;
  string *psVar5;
  ulong uVar6;
  string *unaff_x20;
  string *this;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  void *local_60 [2];
  char local_49;
  
  sVar1 = param_1[0x17];
  uVar4 = *(ulong *)(param_1 + 8);
  if (-1 < (char)sVar1) {
    uVar4 = (ulong)(byte)sVar1;
  }
  this = *(string **)(param_1 + 0x18);
  lVar8 = *(long *)(param_1 + 0x20);
  uVar7 = lVar8 + uVar4;
  *(ulong *)(param_1 + 0x20) = uVar7;
  sVar2 = this[0x17];
  uVar9 = (ulong)(byte)sVar2;
  uVar6 = uVar9;
  if ((char)sVar2 < '\0') {
    uVar6 = *(ulong *)(this + 8);
  }
  if (uVar7 == uVar6) {
    if (-1 < (char)sVar1) {
      *param_1 = (string)0x0;
      param_1[0x17] = (string)0x0;
      return;
    }
    **(undefined1 **)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  if ((char)sVar1 < '\0') {
    if (((*(ulong *)(param_1 + 8) < 3) || (psVar5 = *(string **)param_1, *psVar5 != (string)0x2f))
       || (psVar5[1] != (string)0x2f)) {
      bVar3 = false;
      goto LAB_10069d978;
    }
  }
  else {
    bVar3 = false;
    if ((((byte)sVar1 < 3) || (*param_1 != (string)0x2f)) ||
       (psVar5 = param_1, param_1[1] != (string)0x2f)) goto LAB_10069d978;
  }
  bVar3 = psVar5[2] != (string)0x2f;
LAB_10069d978:
  psVar5 = this;
  if ((char)sVar2 < '\0') {
    psVar5 = *(string **)this;
  }
  if (psVar5[uVar7] == (string)0x2f) {
    if (bVar3) {
      std::string::operator=(unaff_x20,(char)param_1);
      return;
    }
    lVar8 = uVar4 + lVar8 + -1;
    while( true ) {
      uVar4 = uVar9;
      if ((uint)uVar9 >> 7 != 0) {
        uVar4 = *(ulong *)(this + 8);
      }
      if (lVar8 + 1U == uVar4) break;
      psVar5 = this;
      if ((char)uVar9 < '\0') {
        psVar5 = *(string **)this;
      }
      if (psVar5[lVar8 + 1] != (string)0x2f) break;
      *(long *)(param_1 + 0x20) = lVar8 + 2;
      uVar9 = (ulong)(byte)this[0x17];
      lVar8 = lVar8 + 1;
    }
    uVar7 = lVar8 + 1;
    uVar4 = uVar9;
    if ((char)uVar9 < '\0') {
      uVar4 = *(ulong *)(this + 8);
    }
    if ((lVar8 - uVar4 == -1) &&
       (psVar5 = this, FUN_10069cedc(this,lVar8), ((ulong)psVar5 & 1) == 0)) {
      *(long *)(param_1 + 0x20) = lVar8;
      FUN_10069cfb0();
      std::string::operator=(unaff_x20,param_1);
      return;
    }
  }
  psVar5 = this;
  uVar4 = uVar9;
  if ((uint)uVar9 >> 7 != 0) {
    psVar5 = *(string **)this;
    uVar4 = *(ulong *)(this + 8);
  }
  uVar6 = uVar7;
  if (uVar7 < uVar4) {
    do {
      if (psVar5[uVar6] == (string)0x2f) {
        if ((uVar4 != uVar6) && (uVar6 != 0xffffffffffffffff)) goto LAB_10069da8c;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  uVar6 = uVar9;
  if ((char)uVar9 < '\0') {
    uVar6 = *(ulong *)(this + 8);
  }
LAB_10069da8c:
  std::string::string(this,(string *)local_60,(ulong)this,uVar7,(allocator *)(uVar6 - uVar7));
  std::string::operator=(this,param_1);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return;
}

